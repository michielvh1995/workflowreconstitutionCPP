#ifndef COMMON
#include "common.h"
#endif

#ifndef NDE
#include "ndetree.h"
#endif

// =============================================================
// ======================== Import Data ========================
// =============================================================

// Factorio
#include "../data/factorioGenerator.cpp"

// ImageMagick
// #include "../data/imagemagickGenerator.cpp"



// =============================================================
// ================= Set the genetic operators =================
// =============================================================

// Import the operators
// Selection
#include "operators/tournament.cpp"

bool Stop(int gen, int last, int best, int platsize){
  #ifdef maxGen
  if(gen > maxGen)
    return false;
  #endif
  #ifdef maxPlat
  if(platsize > maxPlat) return false;
  #endif
  return true;
}

vector<NDETree> Select(vector<NDETree> *pool) {
  return TournamentSelection(*(pool));
}

//
//
//
NDETree CrossOver(NDETree* p1, NDETree* p2) {
  if(((float) (rand() % 100))/100 < xoChance)
    return NDETree::ECO(p1, p2);
  return *(p1);
}

// This function mutates a single individual tree into the other
void Mutate(NDETree* tree) {
  // Determine whether or not we will mutate
  if(((float) (rand() % 100))/100 > mutChance) return;


  // Get two random indices
  int ind1, ind2;

  ind1 = rand() % (tree->Depths.size()-1) + 1; // we don't want to take the root node as swap-away
  ind2 = rand() % tree->Depths.size();

  while(ind1 == ind2) ind2 = rand() % tree->Depths.size();

  tree->EPO(ind1, ind2);
}

// Fitness calculates the fitness value a given tree, by calling the corresponding functions
// Automatically updates the tree's fitness value
// Inputs :  NDETree*  : Takes a pointer to an NDETree object
// Outputs: Void
void Fitness(NDETree *tree, NDETree& goal){
  tree->Fitness = 0;
  tree->CalcAddSubTreeCorrectness();
  tree->CalcAddLayerDecomposition(goal);
}

bool treeCompare(const NDETree& a, const NDETree& b)
{
    // smallest comes first
    return a.Fitness < b.Fitness;
}


NDETree GenerateRandomTree(int mdepth, int size, vector<Tool> toolset, Tool root) {
  // Set the root node
  vector<Tool> tools = {root};
  vector<int> depths = {0};

  // Now to calculate the rest...
  int depth = 1;
  for(auto i = 1; i < size; ++i) {
    // Insert a random tool
    tools.push_back(toolset[rand() % toolset.size()]);
    depths.push_back(depth);

    // Now to calculate the depth of the next node
    if(rand() % 2) depth = min(depth+1, mdepth);
    else if (rand() % 2) depth = max(depth-1,1);
  }

  return NDETree(tools, depths);
}

vector<NDETree> GenerateInitialPopRandomly(vector<Tool> toolset, NDETree goal) {
  vector<NDETree> pool;
  for (auto i = 0; i< POOLSIZE; ++i) {
    // Determine what the maximum depth is, this is done by taking the depth of the original
    //  then it is changed according to its depth/size
    int mdepth = *max_element(goal.Depths.begin(), goal.Depths.end());
    int diff = rand() % ((2*mdepth)/goal.Depths.size()) - (mdepth/goal.Depths.size());
    mdepth += diff;
    auto tree = GenerateRandomTree(mdepth, goal.Tools.size(), toolset, goal.Tools[0]);
    pool.push_back(tree);
  }
  return pool;
}

vector<NDETree> GenerateInitialPopOriginalOnly(vector<Tool> toolset, NDETree goal) {
  // Generate the initial population by copying the goal tree a million times
  vector<NDETree> pool;

  for (auto i = 0; i< POOLSIZE; ++i) pool.push_back(NDETree::Copy(goal));

  return pool;
}

vector<NDETree> GenerateInitialPopRandomReplace(map<string, Tool> toolbox, vector<Tool> toolset, NDETree goal) {
  // Generate the initial population by copying the goal tree a million times
  //  however, this function also checks whether or not the tree has missing tools. Those are randomly filled in
  vector<NDETree> pool;
  vector<int> missingInds;

  // Gather which tools are missing
  for(auto i = 0; i < goal.Tools.size(); ++i)
     if (toolbox.count(goal.Tools[i].name) == 0)
       missingInds.push_back(i);

  for (auto i = 0; i < POOLSIZE; ++i) {
    auto tree = NDETree::Copy(goal);

    for(auto j : missingInds) {
      tree.Tools[j] = toolset[rand() % toolset.size()];
    }
    pool.push_back(tree);
  }

  return pool;
}

// =============================================================
// ================== The Genetic Game itself ==================
// =============================================================

NDETree Play(vector<NDETree> pool, NDETree& goal) {

  vector<NDETree> parents;
  vector<NDETree> children;

  // Stopconditions:
  int generation = 0;
  int platSize = 0;       // To keep track of how long we have no inm
  int lastbest = MAXINT;

  // Play the genetic game
  fflush(stdout);

  while (Stop(generation, lastbest, pool[0].Fitness, platSize)) {
    // TIMING
    auto t1 = std::chrono::high_resolution_clock::now();

    // Get the parent pool
    parents = Select(&pool);

    // Generate the offspring
    for (auto i = 0; i < parents.size()/2; i++) {
      // printf("Begin with individual %d\n", i);

      // perform crossover
      NDETree c1 = CrossOver(&parents[i*2], &parents[i*2 +1]);
      NDETree c2 = CrossOver(&parents[i*2 +1], &parents[i*2]);
      // printf("Post crossover\n");

      // mutate both
      Mutate(&c1);
      Mutate(&c2);

      // printf("Post mutation\n");
      // Calculate their fitness
      Fitness(&c1, goal);
      Fitness(&c2, goal);

      // printf("Calc'd fitness\n\n");

      // Add them to the list
      children.push_back(c1);
      children.push_back(c2);

      #if parentsCompete
      children.push_back(parents[i*2]);
      children.push_back(parents[i*2+1]);
      #endif
    }

    // Sort the children vector and store the first N in the pool vector
    sort(children.begin(), children.end(), treeCompare);
    pool = vector<NDETree>(&children[0], &children[POOLSIZE]);

    // Reset the children list for the next generation
    children.clear();
    printf("Generation %d's best has fitness %d\n", generation, pool[0].Fitness);

    // Update plateau values and the generation
    if(lastbest <= pool[0].Fitness) platSize++;
    else lastbest = pool[0].Fitness;

    // TIMING
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    printf("  Generation %d took %.3f ms\n", generation, ((float)duration)/1000);
    // ENDTIMING

    generation++;

  }

  return pool[0];
}

int main() {
  // =============================================================
  // =================== Initalize some values ===================
  // =============================================================

  // Seed the random
  srand(time(0));

  printf("TODO: \n * Generate Trees (at random)\n * More fitness functions \n\n");


  // =============================================================
  // ========================== Dataset ==========================
  // =============================================================
  // Retrieve the dataset
  printf("Get the data-set:\n");
  vector<Tool> tools = Factorio();

  // Turn the vector of tools into a dictionary
  auto dataset = map<string, Tool>();
  for(auto t : tools)
    dataset[t.name.c_str()] = t;

  printf("Retrieved %d tools\n\n", dataset.size());

  // =============================================================
  // Create the tree
  // =============================================================

  NDETree goal({dataset["electronic-circuit"], dataset["copper-cable"], dataset["copper-plate"], dataset["copper-ore"], dataset["iron-plate"], dataset["iron-ore"]}, {0,1,2,3,1,2});
  goal.CalculateLD();
  Fitness(&goal, goal);

  NDETree testyboi({dataset["electronic-circuit"], dataset["copper-cable"], dataset["copper-plate"], dataset["iron-plate"], dataset["iron-ore"]}, {0,1,2,1,2});

  Fitness(&testyboi, goal);

  printf("Goal fitness:%d\n", goal.Fitness);
  printf("testy fitness:%d\n", testyboi.Fitness);

  printf("Parameters:\n popsize: %d, p(xo) %.2f, p(mut) %.2f \n\n", POOLSIZE, xoChance, mutChance);

  // Try removing a single item from the datasets
  //tools.erase(tools.begin() + 36);
  //dataset.erase("copper-cable");

  //auto pool = GenerateInitialPopRandomly(tools, goal);
  // auto pool = GenerateInitialPopOriginalOnly(tools, goal);
  auto pool = GenerateInitialPopRandomReplace(dataset, tools, goal);

  auto t1 = std::chrono::high_resolution_clock::now();
  auto tree = Play(pool, goal);
  auto t2 = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
  printf("Calculating this tree took %.3f seconds\n", ((float)duration)/1000000);

  tree.Print();
  Fitness(&tree, goal);
  printf("Fitness: %d\n", tree.Fitness);

  return 0;
}
