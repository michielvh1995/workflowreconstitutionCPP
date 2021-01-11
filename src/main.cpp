#define maxPlat     10
#define maxGen      100
#define REPEATS     25
#define parentsCompete true

bool verbose     = false;
int  POOLSIZE    = 250;
float mutChance  = 0.1;
float xoChance   = 1.0;

/*
 What we output:
 % PopSize, p(mut), p(x), tree size, tools missing count, calcTime, avg fitness
*/

#ifndef MAIN
#include "main.h"
#endif

#include "generators.h"

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
  if(((float) (rand() % 1000))/1000 < xoChance)
    return NDETree::ECO(p1, p2);
  return *(p1);
}

// This function mutates a single individual tree into the other
void Mutate(NDETree* tree) {
  // Determine whether or not we will mutate
  if(((float) (rand() % 1000))/1000 > mutChance) return;


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

// =============================================================
// ================== The Genetic Game itself ==================
// =============================================================

NDETree Play(vector<NDETree> pool, NDETree& goal, bool verbose = true) {
  if(verbose)
    printf("Parameters:\n popsize: %d, p(xo) %.2f, p(mut) %.2f \n\n", POOLSIZE, xoChance, mutChance);

  vector<NDETree> parents;
  vector<NDETree> children;

  // Stopconditions:
  int generation = 0;
  int platSize = 0;       // To keep track of how long we have no inm
  int lastbest = MAXINT;

  // Play the genetic game
  while (Stop(generation, lastbest, pool[0].Fitness, platSize)) {
    // printf("start\n");
    // TIMING
    auto t1 = std::chrono::high_resolution_clock::now();

    // Get the parent pool
    parents = Select(&pool);

    // Generate the offspring
    for (auto i = 0; i < parents.size()/2; i++) {
      // printf("Begin with individual %d\n", i);
      //printf("preXO\n");

      // perform crossover
      NDETree c1 = CrossOver(&parents[i*2], &parents[i*2 +1]);
      NDETree c2 = CrossOver(&parents[i*2 +1], &parents[i*2]);
      // printf("Post crossover\n");

      // mutate both
      Mutate(&c1);
      Mutate(&c2);

      //printf("preF %d // %d\n", c1.Tools.size(), c2.Tools.size());

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

    // Update plateau values and the generation
    if(lastbest <= pool[0].Fitness) platSize++;
    else lastbest = pool[0].Fitness;

    // TIMING
    if(verbose) {
        printf("Generation %d's best has fitness %d\n", generation, pool[0].Fitness);
      auto t2 = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
      printf("  Generation %d took %.3f ms\n", generation, ((float)duration)/1000);
    }
    // ENDTIMING

    generation++;

  }

  return pool[0];
}

double average(vector<int> v) {
  double sum;
  for (auto i : v) sum += i;

  return (sum/v.size());

}


vector<float> RunGame(vector<NDETree> pool, NDETree goal, vector<Tool> tools, int repeats, bool verbose = true) {
  vector<int> fitnesses(repeats);
  auto t1 = std::chrono::high_resolution_clock::now();

  for(auto i =0; i< repeats; ++i) {

    auto tree = Play(pool, goal, verbose = verbose);
    Fitness(&tree, goal);

    if(verbose) {
      auto t2 = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
      printf("Found solution: ");
      tree.Print();
      printf("Calculating this tree took %.3f seconds\n", ((float)duration)/1000000);
    }

    fitnesses[i] = tree.Fitness;
  }
  auto t2 = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

  // Output the average fitness and the average time per found solution
  return { average(fitnesses), ((float)duration)/(1000000 * repeats) };
}



int main(int argc, char **argv) {
  // =============================================================
  // =================== Initalize some values ===================
  // =============================================================
  printf("Entered %d arguments \n", argc);

  mutChance = atof(argv[1]);

  // Seed the random
  srand(time(0));

  printf("TODO: \n * Subtree Exchange \n * Edit distance \n * More fitness functions \n\n");


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


  // Try removing a single item from the datasets
  tools.erase(tools.begin() + 36);
  dataset.erase("copper-cable");

  // .. and introduce a replacement part
  Tool copper_cable;
  copper_cable.name = "copper-cable-alt";
  copper_cable.id = "copper-cable-alt";
  copper_cable.operation = "copper-cable";
  copper_cable.type = "tool";
  copper_cable.inputs = {};
  copper_cable.inTypes = {};
  copper_cable.outputs = {};

  Input ins, outs;

  ins.label = "input1";
  ins.type = "iron-plate";
  copper_cable.inputs.push_back(ins);
  copper_cable.inTypes.push_back("copper-plate");
  sort (copper_cable.inTypes.begin(),copper_cable.inTypes.end());
  outs.label = "output1";
  outs.type = "copper-cable";
  copper_cable.outputs.push_back(outs);

  tools.push_back(copper_cable);
  dataset["copper-cable-alt"] = copper_cable;

  // =============================================================
  // Create the tree
  // =============================================================

  //

  NDETree goal({dataset["electronic-circuit"], dataset["copper-cable"], dataset["copper-plate"], dataset["copper-ore"], dataset["iron-plate"], dataset["iron-ore"]}, {0,1,2,3,1,2});
  goal.CalculateLD();
  goal.Fitness = 0;
  vector<NDETree> pool;
  vector<float> res;
  // auto pool = GenerateInitialPopRandomly(tools, goal);
  // auto pool = GenerateInitialPopOriginalOnly(tools, goal);

  auto sizes   = { 1000, 10000, 25000 };
  vector<float> chances = { 0, 0.1, 0.25, 0.5 };
  vector<float> xhances = { 1, 0.5 };
  /*
   What we output:
   % PopSize, p(mut), p(x), tree size, tools missing count, avg fitness, avg calcTime

  // 25 * 120 * 2 * 4

  POOLSIZE = 10000;
  mutChance = 0.1;
  xoChance = 0.5;
  verbose = true;
  */
  
  printf("POOLSIZE, data set size, mutation chance, crossover chance, workflow size, missing tools, average fitness, average time");
  for (auto px : xhances) {
    xoChance = px;
    for (auto s: sizes) {
      POOLSIZE = s;
      pool = GenerateInitialPopRandomReplace(dataset, tools, goal);
      res = RunGame(pool, goal, tools, REPEATS, verbose);

      printf("Factorio, Correctness + LD, EPO, ECO, generate random replace, 2-1-tournament %d repeats\n", REPEATS);
      printf("%d & %d & %.2f & %.2f & %d & %d & %.2f & %.2fs \\\\ \n", POOLSIZE, tools.size(), mutChance, xoChance, goal.Tools.size(), 1, res[0], res[1]);
      fflush(stdout);
    }

    printf("\n");

    for (auto s: sizes) {
      POOLSIZE = s;

      // Create the pool
      pool = GenerateInitialPopRandomly(tools, goal);
      // Calculate the average fitness and calculation time
      res = RunGame(pool, goal, tools, REPEATS, verbose);

      // Output
      printf("Factorio, Correctness + LD, EPO, ECO, generate random, 2-1-tournament %d repeats\n", REPEATS);
      printf("%d & %d & %.2f & %.2f & %d & %d & %.2f & %.2fs \\\\ \n", POOLSIZE, tools.size(), mutChance, xoChance, goal.Tools.size(), 1, res[0], res[1]);
      fflush(stdout);
    }
  }
  return 0;
}
