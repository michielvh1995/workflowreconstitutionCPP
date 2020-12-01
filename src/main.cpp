#ifndef COMMON
#include "common.h"
#endif

#include <iostream>
#include <map>

#include "ndetree.h"

// Import the operators
// Selection
#include "operators/tournament.cpp"

bool Stop(int gen, int last, int best, int platsize){
  return false;
}

//
//
//
NDETree CrossOver(NDETree p1, NDETree p2) {
  return p1;
}

//
//
//
NDETree Mutate(NDETree tree) {

  return tree;
}

// Fitness calculates the fitness value a given tree, by calling the corresponding functions
// Automatically updates the tree's fitness value
// Inputs :  NDETree*  : Takes a pointer to an NDETree object
// Outputs: Void
void Fitness(NDETree *tree){
  tree->Fitness = 0;
  tree->CalcAddSubTreeCorrectness();
}

bool treeCompare(const NDETree& a, const NDETree& b)
{
    // smallest comes first
    return a.Fitness < b.Fitness;
}

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
      NDETree c1 = CrossOver(parents[i*2], parents[i*2 +1]);
      NDETree c2 = CrossOver(parents[i*2 +1], parents[i*2]);

      // mutate both
      c1 = Mutate(c1);
      c2 = Mutate(c2);

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

  Tool testTool;
  testTool.name = "test";
  testTool.inTypes = {"int"};

  Input out;
  out.type = "int";

  Tool testLeaf;
  testLeaf.name = "leaf";
  testLeaf.outputs = {out};

  Tool testLe;
  testLe.name = "Jack";
  testLe.outputs = {out};

  NDETree testTree({testTool, testLeaf, testLe}, {0, 1, 2});
  Fitness(&testTree);
  printf("Test tree fitness: %d\n", testTree.Fitness);

  for (auto t: testTree.Tools) {
    printf("%s", t.name.c_str());
  }
  printf("\n");
  //testTree.MoveSubTree(2, 0);

  rotate(testTree.Depths.begin() + 1, testTree.Depths.begin() + 2, testTree.Depths.begin());

  for (auto t: testTree.Depths) {
    printf("%s", t);
  }
  printf("\n Completed rotation \n");


// =============================================================
// Dataset
// =============================================================
  printf("Get the data-set:\n");

  map<string, Tool> dataset;
  dataset["test"] = testTool;

  printf("Retrieved %d tools\n", dataset.size());

// =============================================================
// Create the tree
// =============================================================
  /*
  stc = [("imagemagick-copy",0),("user-input-string",1), ("imagemagick-new", 1),("user-input-int", 2), ("user-input-int",2), ("user-input-string",2)]
  dt = [(Node(recipes[n]), d) for n,d in stc]

  goal = ndeTree.NDETree(list = dt)
  */
  //vector<Tool> tools = {dataset["imagemagick-copy"], dataset["user-input-string"], dataset["imagemagick-new"], dataset["user-input-int"], dataset["user-input-int"],dataset["user-input-string"]};

  vector<Tool> tools = {dataset["test"]};
  vector<int> depths = {0, 1, 1, 2, 2, 2};

  NDETree Goal = NDETree(tools, depths);

  return 0;
}
