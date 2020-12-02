#ifndef COMMON
#include "common.h"
#endif

#include "ndetree.h"

// =============================================================
// =================== Import Factorio data ====================
// =============================================================
#include "../data/factorioGenerator.cpp"




// =============================================================
// ================= Set the genetic operators =================
// =============================================================

// Import the operators
// Selection
#include "operators/tournament.cpp"

bool Stop(int gen, int last, int best, int platsize){
  return false;
}

//
//
//
NDETree CrossOver(NDETree* p1, NDETree* p2) {
  return NDETree::ECO(p1, p2);
}

// This function mutates a single individual tree into the other
void Mutate(NDETree* tree) {
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
void Fitness(NDETree *tree){
  tree->Fitness = 0;
  tree->CalcAddSubTreeCorrectness();
  fflush(stdout);
}

bool treeCompare(const NDETree& a, const NDETree& b)
{
    // smallest comes first
    return a.Fitness < b.Fitness;
}

// =============================================================
// ================== The Genetic Game itself ==================
// =============================================================

void Play(vector<NDETree> pool, int poolSize) {
  vector<NDETree> parents;
  vector<NDETree> children;

  // Stopconditions:
  int generation = 0;
  int platSize = 0;       // To keep track of how long we have no inm
  int lastbest = MAXINT;

  // Play the genetic game
  while (Stop(generation, lastbest, pool[0].Fitness, platSize)) {
    // Get the parent pool
    parents = Select(&pool);

    // Generate the offspring
    for (auto i = 0; i < parents.size()/2; i++) {
      // perform crossover
      NDETree c1 = CrossOver(&parents[i*2], &parents[i*2 +1]);
      NDETree c2 = CrossOver(&parents[i*2 +1], &parents[i*2]);

      // mutate both
      Mutate(&c1);
      Mutate(&c2);

      // Calculate their fitness
      Fitness(&c1);
      Fitness(&c2);

      // Add them to the list
      children.push_back(c1);
      children.push_back(c2);
    }

    // Sort the children vector and keep the first N
    sort(children.begin(), children.end(), treeCompare);
    pool = vector<NDETree>(&children[0], & children[poolSize]);

    // Reset the children list for the next generation
    children.clear();
    generation++;
  }
}

int main() {
  // =============================================================
  // =================== Initalize some values ===================
  // =============================================================

  // Seed the random
  srand(time(0));

  printf("TODO: \n * Generate Trees (at random) \n * Stop condition \n * More fitness functions \n\n");


  // =============================================================
  // ========================== Dataset ==========================
  // =============================================================

  printf("Get the data-set:\n");

  auto tools = Factorio();
  auto dataset = map<string, Tool>();

  for(auto t : tools)
    dataset[t.name.c_str()] = t;

  printf("Retrieved %d tools\n\n", dataset.size());

  // =============================================================
  // Create the tree
  // =============================================================

  //NDETree testTree({dataset["electronic-circuit"], dataset["copper-cable"], dataset["copper-plate"], dataset["copper-ore"], dataset["iron-plate"], dataset["iron-ore"]}, {0,1,2,3,1,2});
  NDETree testTree({dataset["electronic-circuit"], dataset["copper-cable"], dataset["copper-plate"], dataset["copper-ore"]}, {0,1,2,3});
  NDETree testTree2({dataset["iron-gear-wheel"], dataset["iron-plate"], dataset["iron-ore"], dataset["copper-ore"]}, {0,1,2,2});

  printf("%d Inputs of %s:\n",dataset["electronic-circuit"].inTypes.size(), dataset["electronic-circuit"].name.c_str());
  for (int i = 0; i < dataset["electronic-circuit"].inTypes.size(); i++) {
    printf("%d: %s ",i , dataset["electronic-circuit"].inTypes[i].c_str());
  }
  printf("\n");
  printf("\n");

  testTree.Print();
  Fitness(&testTree);
  printf("Fitness: %d\n", testTree.Fitness);
  return 0;
  testTree.EPO(1, 0);
  testTree.Print();
  auto p = NDETree::ECO(&testTree, &testTree2);
  
  Fitness(&p);
  printf("Tree after ECO:\n  ");
  p.Print();
  printf("Fitness: %d \n", p.Fitness);
  return 0;
}
