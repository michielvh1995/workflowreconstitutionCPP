#include "ndetree.h"

static vector<Tool> _ntools = {};
static vector<int> _ndepths = {};

static default_random_engine rng;

static bool subTreeSort(Tool i, Tool j) { return i.operations[0] < j.operations[0]; }

void NDETree::CalculateOperatorLD() {
  // For each layer, create its own vector
  for(auto i = 0; i < mdepth+1; ++i)
    oLD.push_back(vector<string>());

  for(auto i = 0; i < Tools.size(); ++i) {
    for(auto t: Tools[i].operations) {
      oLD[Depths[i]].push_back(string(t));
    }
  }

  for(auto i = 0; i < mdepth+1; ++i)
    sort(oLD[i].begin(), oLD[i].end());
}

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
     fab = _ECOStep(fab, ref);
  }
//  fab.CalculateOperatorLD();
  return fab;
}

// To determine if we have something at the top level
bool isOne(int x) { return x == 1; }

NDETree NDETree::SubTreeExchange(NDETree* a, NDETree* b) {
  // Perform crossover by exchaging random subtrees
  // We will only use lvel one subtrees... for now?
  // Step one is to find how many subtrees we want:
  // printf("SUBTREEEXCHANGE\n");
  // fflush(stdout);

  int na = count(a->Depths.begin(), a->Depths.end(), 1);
  int nb = count(b->Depths.begin(), b->Depths.end(), 1);
  int c = 0;
  
  // printf("counts are made: na %d, nb %d \n", na, nb);
  // fflush(stdout);
  
  // Determine which one is the lowest, then add a random amount to that.
  // This way we can get a value between na and nb
  if (na == nb) c = na;
  else if (na > nb)
    c = nb + rand() % (na-nb);
  else
    c = na + rand() % (nb-na);

  // printf("ranDONE\n");
  // fflush(stdout);

  // The next step is to determine how many per tree:
  int ca = c >> 1; // Take half, ignoring the odd/even part
  int cb = c - ca; // Take the rest, automatically taking an odd number in account

  // Now we find the subtrees
  vector<int> indsA = {};
  vector<int> indsB = {};

  for(auto i = 0; i < a->size(); i++)
     if (a->Depths[i] == 1) indsA.push_back(i);

  for(auto i = 0; i < b->size(); i++)
     if (b->Depths[i] == 1) indsB.push_back(i);
//  printf("Indices got\n");
//  fflush(stdout);

  // Now we take the indices at random from each tree and copy them to the child!
  shuffle(indsA.begin(), indsA.end(), rng);
  shuffle(indsB.begin(), indsB.end(), rng);
  
//  printf("Chachaslide\n");
//  fflush(stdout);

  // Now we get the subtrees and fill in the new list:
  vector<int> lensA = {}, lensB = {};
  lensA.clear();
  lensB.clear();


  // Retrieve the subtree lengths:
  for(auto i = 0; i < ca; i++)
     lensA.push_back(a->GetSubTreeLength(indsA[i]));

  for(auto i = 0; i < cb; i++)
     lensB.push_back(b->GetSubTreeLength(indsB[i]));
  

//  printf("Lengthsgot\n");
//  fflush(stdout);
  
  // And now we extract the subtrees:
  _ntools.clear();
  _ndepths.clear();

  _ntools.push_back(a->Tools[0]);
  _ndepths.push_back(0);


  for(auto i = 0; i < ca; i++) 
    if(lensA[i] > 0)
    {
      _ntools.insert(_ntools.end(), a->Tools.begin() + indsA[i], a->Tools.begin() + indsA[i]+lensA[i]);
      _ndepths.insert(_ndepths.end(), a->Depths.begin() + indsA[i], a->Depths.begin() + indsA[i]+lensA[i]);
    }

  // printf("ca tools, done\n");
  // fflush(stdout); 
  // In the next two lines there is a bug possbile, somehow...
  for(auto i = 0; i < cb; i++) 
     if(lensB[i] > 0)
     {
       _ntools.insert(_ntools.end(), b->Tools.begin() + indsB[i], b->Tools.begin() + indsB[i] + lensB[i]);
       _ndepths.insert(_ndepths.end(), b->Depths.begin() + indsB[i], b->Depths.begin() + indsB[i] + lensB[i]);
     }
  
//  printf("DONE\n");
//  fflush(stdout);
  // And now we generate a new individual and return it!
  return NDETree(_ntools, _ndepths);

  // Preferably we keep the subtrees unique...

}

// ==========================================================
// ==================== Additional Tools ====================
// ==========================================================

void NDETree::Print() {
  for(auto i = 0; i < Depths.size(); i++) {
     printf("(%s, %d) ", Tools[i].name.c_str(), Depths[i]);
  }
  printf("\n");
}
