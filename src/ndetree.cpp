#include "ndetree.h"

static bool subTreeSort(Tool i, Tool j) { return i.operation < j.operation; }

void NDETree::CalculateLD() {
  // For each layer, create its own vector
  for(auto i = 0; i < mdepth; ++i) {
       vector<Tool> level;
       // Now add this to the vector
       for(auto j = 0; j<Tools.size(); j++) 
          if(Depths[j] == i) level.push_back(Tools[j]);

     // Sort the vector
     sort(level.begin(), level.end(), subTreeSort);
     LD.push_back(level);
  }
}

void NDETree::CalcAddLayerDecomposition(NDETree &goal) {
  // Calculate the layer decomposed difference between the goal tree and this tree
  // Step 1: Get per tree each layer at each depth
  CalculateLD();

  // Now we check per depth what the difference is between the levels
  vector<Tool> diff;
  for(auto d= 0; d < min(mdepth, goal.mdepth); d++)
    set_symmetric_difference(
	 LD[d].begin(),
	 LD[d].end(),
	 goal.LD[d].begin(),
	 goal.LD[d].end(),
	 inserter(diff, diff.begin())
    );
  
  // And update the fitness value with the difference
  Fitness += diff.size();
  diff.clear();

  // Now we add the cost of the levels that are missing in either tree:
  if(mdepth > goal.mdepth) for(auto d = goal.mdepth; d < mdepth; ++d) Fitness += LD[d].size();
  if(mdepth < goal.mdepth) for(auto d = mdepth; d < goal.mdepth; ++d) Fitness += goal.LD[d].size(); 
}


void NDETree::CalcAddSubTreeCorrectness(int ind) {
  // Calculate whether the subtree starting at index ind is correct

  int d = Depths[ind];	// The depth of the node
  int td = d + 1;	// The target depth

  // First we check if we are dealing with a leaf:
  if (Tools[ind].inTypes.size() == 0) {

     // Are there nodes below this one?
     for(int i = ind + 1; i < Depths.size();i++) {
         if(i == Tools.size()) return; // bug catcher for if it is the last element of the tree
	       if(Depths[i] < td) return; // If the subtree ends
 	       if(Depths[i] > d) {	// Punish for each node below
		     CalcAddSubTreeCorrectness(i);
		     Fitness += 1;
	     }
     }
     return;
  }
  // Now check how many inputs we got, and how many we are missing
  vector<string> ins;
  for(auto i = ind + 1; i < Depths.size();i++) {
    if(ind == Depths.size()-1) break; // bug catcher for if it is the last element of the tree
    if(Depths[i] < td) break; 	// If the subtree ends
    if(Depths[i] == td) {        // Get each child node
       CalcAddSubTreeCorrectness(i); // Calculate the added fitness for these
       ins.push_back(Tools[i].outputs[0].type);
     }
  }

  sort(ins.begin(), ins.end());

  // Calculate the difference between the two lists
  vector<string> diff;

  set_symmetric_difference(ins.begin(),
	 ins.end(),
	 Tools[ind].inTypes.begin(),
	 Tools[ind].inTypes.end(),
	 inserter(diff, diff.begin())
  );
  // And update the fitness value with the difference
  Fitness += diff.size();
};

// Calculates the length of a subtree with root at a given index
// Inputs : int : ind	: The index of the root of the subtree
// Output : int : The length of the subtree. Length 1 means that the rootnode is a leaf.
int NDETree::GetSubTreeLength(int ind) {
  for(auto i = ind + 1; i < Depths.size(); i++)
    if (Depths[i] <= Depths[ind]) return i-ind;
  return Depths.size() - ind;
}

// Creates a new NDETree with a moved subtree compared to this one.
// Inputs : int : ind	: The index of the root of the subtree
void NDETree::MoveSubTree(int from, int to) {
  // Get the length of the subtree
  int len = GetSubTreeLength(from);

  // Check if this swap even is possible...
  if (to >= from && to < from + len) return;

  // Now to extract the subtrees
  auto subDs = Slice(Depths, from, from + len);
  auto subTs = Slice(Tools , from, from + len);
  // printf("subTs length: %d\n", subTs.size());

  // Update the depths:
  for(auto i = 0; i < len; i++) subDs[i] += Depths[to] - Depths[from] + 1;

  // Recompile the vectors
  auto newTs = vector<Tool>();
  newTs.reserve(Depths.size());
  newTs.insert(newTs.end(), Tools.begin(), Tools.begin() + from);
  newTs.insert(newTs.end(), Tools.begin() + from + len, Tools.end());

  // If the target comes after the source, we need to update its index
  if(to > from) to -= len;
  newTs.insert(newTs.begin() + to + 1, subTs.begin(), subTs.end());

  // Do the same for the depths.
  auto newDs = vector<int>();
  newDs.reserve(Depths.size());

  newDs.insert(newDs.end(), Depths.begin(), Depths.begin() + from);
  newDs.insert(newDs.end(), Depths.begin() + from + len, Depths.end());
  newDs.insert(newDs.begin() + to + 1, subDs.begin(), subDs.end());

  // Now update this tree...
  Depths = newDs;
  Tools = newTs;
}


// ==========================================================
// ============= Mutation & Crossover Operators =============
// ==========================================================

void NDETree::EPO(int from, int to) {
  // See if the swap is valid or not, if it isn't, switch indices
  // printf("EPO!\n");
  int len = GetSubTreeLength(from);

  if (to >= from && to < from + len) {
     int tmp = from;
     from = to;
     to = tmp;
  }
  // printf("Now we move the subtree from %d to %d\n", from, to);
  // Now perform the subtree swap.
  MoveSubTree(from, to);
}

static int _findParent(NDETree* tree, int childIndex) {
  // Loop back from child index
  // printf("  Find parent of index %d\n", childIndex);

  for(int i = childIndex; i > 0; i--)
     if(tree->Depths[i] < tree->Depths[childIndex]) return i;

  return -1;
}

static int _findIndex(NDETree* tree, Tool tool) {
  //
  // printf("Find index\n");
  for(int i = 0; i < tree->Depths.size(); i++){
     // printf("  Tree lengths %d and index %d\n", tree->Tools.size(), i);
     // printf("  Tool at index: %s\n", tree->Tools[i].name.c_str());
     // printf("  Supposed tool: %s\n", tool.name.c_str());
     // fflush(stdout);
     if(tree->Tools[i] == tool) return i;
  }
  return -1;
}

static NDETree _ECOStep(NDETree fab, NDETree* ref) {
  // Perform a single step of ECO
  // Determine what tool will get a new parent
  int v = rand() % (fab.Depths.size()-1) + 1;

  // printf("We want to swap %s at index %d\n",
  // printf("Swap index: %d\n",v);
  // fflush(stdout);
  // Find the parent in ref:
  int rpi = _findParent(ref, v);
  // printf("index of parent in ref: %d\n", rpi);
  // fflush(stdout);
  // Now find the node and its parent in FAB:
  int ind = _findIndex(&fab, ref->Tools[v]);

  // printf("index of parent in fab: %d\n", rpi);
  // fflush(stdout);
  // If the node does not exist, quit it.
  if(ind == -1) return fab;
  int fpi = _findParent(&fab, ind);

  // If a parent is missing, quit it.
  if(rpi == -1 | fpi == -1) return fab;
  // printf("Now to do EPO\n");
  // Now do EPO!
  fab.EPO(ind, fpi);
  // printf("EPO Done\n");

  return fab;
}

NDETree NDETree::ECO(NDETree* base, NDETree* ref) {
  // Recombine two individuals using Gustavo Post Sabin's Edge Copy Operator
  // printf("ECO\n");
  // fflush(stdout);

  // Determine how many edges we recombine
  int n = base->Tools.size();
  int c = rand() % (n/2) + n/4;
  // printf("There will be %d cross-overs \n", c);
  // fflush(stdout);

  // Copy the base tree
  NDETree fab(base->Tools, base->Depths);

  // printf("EECO step begins:\n");
  for(int i = 0; i < c; i++) {
     // Perform the ECO step
     _ECOStep(fab, ref);
  }

  return NDETree(base->Tools, base->Depths);
}


//static NDETree SubTreeExchange(NDETree* a, NDETree* b) {
  // Perform crossover by exchaging random subtrees
  // We will only use lvel one subtrees... for now?
  //
//}

// ==========================================================
// ==================== Additional Tools ====================
// ==========================================================

void NDETree::Print() {
  for(auto i = 0; i < Depths.size(); i++) {
     printf("(%s, %d) ", Tools[i].name.c_str(), Depths[i]);
  }
  printf("\n");
}
