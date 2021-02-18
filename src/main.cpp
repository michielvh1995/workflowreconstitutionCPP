#define maxPlat     20
#define maxGen      100

#define parentsCompete true

int REPEATS      = 1;
bool verbose     = false;

char FITNESS     = 'b';

int  POOLSIZE    = 250;
float mutChance  = 0.1;
float xoChance   = 1.0;

char ECOCONST    = 'e';
char SUBCONST    = 's';
char CASE        = '1';
char GENERATOR   = 'd';


/*
 What we output:
 % PopSize, p(mut), p(x), tree size, tools missing count, calcTime, avg fitness
*/

#ifndef MAIN
#include "main.h"
#endif

#include "generators.h"
#include "fitness.h"

// =============================================================
// ======================== Import Data ========================
// =============================================================

#include "handletoolsets.h"

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
NDETree CrossOver(NDETree* p1, NDETree* p2, char xof) {
  if(((float) (rand() % 1000))/1000 < xoChance)
    if (xof == ECOCONST)
      return NDETree::ECO(p1, p2);
    else if(xof == SUBCONST)
      return NDETree::SubTreeExchange(p1, p2);
  return *(p1);
}

// This function mutates a single individual tree into the other
void Mutate(NDETree* tree) {
  // Determine whether or not we will mutate
  if(((float) (rand() % 1000)) / 1000 > mutChance) return;

  // Get two random indices
  int ind1 = 0, ind2 = 1;

  // printf("Tree size: %d \n", tree->Depths.size());
  //printf("\n");
  
  if(tree->Depths.size() > 1)
    ind1 = rand() % (tree->Depths.size() - 1) + 1; // we don't want to take the root node as swap-away
  if(tree->Depths.size() > 1)
    ind2 = rand() %  tree->Depths.size();
  
  // Do we get past
  // printf("Indices: %d, %d, tree length: %d \n", ind1, ind2, tree->Depths.size());
  // This is just a dumb check to catch a dumb case...
  if(ind1 ==0 && ind2 == 1) return;

  while(ind1 == ind2) ind2 = rand() % tree->Depths.size();
  
  tree->EPO(ind1, ind2);
}

// Fitness calculates the fitness value a given tree, by calling the corresponding functions
// Automatically updates the tree's fitness value
// Inputs :  NDETree*  : Takes a pointer to an NDETree object
// Outputs: Void
void Fitness(FitnessCalculator &fc, NDETree *tree){
  // Reset this one, as it might have changed during mutation
  tree->mdepth = *max_element(tree->Depths.begin(), tree->Depths.end());

  // Reset fitness and recalculate it
  tree->Fitness = 0;
  if(FITNESS == 'z') { 
    tree->Fitness += fc.CalculateSubTreeCorrectness(tree) * 4;
    tree->Fitness += fc.CalculateSizeDifference(tree);
    tree->Fitness += fc.CalculateLDValue(tree);
    return;
  }
  if(FITNESS == 'a' || FITNESS == 'b' || FITNESS == 'l') // All, set B or LD
    tree->Fitness += fc.CalculateLDValue(tree);
  if(FITNESS == 'a'|| FITNESS == 'b' || FITNESS == 'c' || FITNESS == 'd') // All, set B/d or Correctness
  {  tree->Fitness += fc.CalculateSubTreeCorrectness(tree);
  }
  if(FITNESS == 'a' || FITNESS == 's' || FITNESS == 'd') // All, set d or size
  {    tree->Fitness += fc.CalculateSizeDifference(tree) ;
  }
  //if(FTNESS == 'a' || FITNESS == 'e')                  // All or EditDistance
  //  printf("Editdistance!");
}

// =============================================================
// ================== The Genetic Game itself ==================
// =============================================================

NDETree Play(vector<NDETree> pool, NDETree& goal, FitnessCalculator &fc, char xof, bool verbose = true) {
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
    if(verbose)
      printf("start of generation\n");
    // TIMING
    auto t1 = std::chrono::high_resolution_clock::now();

    // Get the parent pool
    parents = Select(&pool);
//    if(verbose)
  //    printf("Parents selected\n");

    // Generate the offspring
    for (auto i = 0; i < parents.size()/2; i++) {
      // printf("Begin with individual %d\n", i);
      //printf("preXO\n");

      // perform crossover
      NDETree c1 = CrossOver(&parents[i*2], &parents[i*2 +1], xof);
      NDETree c2 = CrossOver(&parents[i*2 +1], &parents[i*2], xof);
      // printf("They crossed the line\n");

      // mutate both
      Mutate(&c1);
      Mutate(&c2);
      // printf("Mutats everywhere\n");
      	
      // Calculate their fitness
      Fitness(fc, &c1);
      Fitness(fc, &c2);
      // printf("Kast status achieved \n");

      // Add them to the list
      children.push_back(c1);
      children.push_back(c2);

      #if parentsCompete
      children.push_back(parents[i*2]);
      children.push_back(parents[i*2+1]);
      #endif
    }
  
    if(verbose)
      printf("Generation calculation done\n");

    // Sort the children vector and store the first N in the pool vector
    sort(children.begin(), children.end(), treeCompare);
    pool = vector<NDETree>(&children[0], &children[POOLSIZE]);

    // Reset the children list for the next generation
    children.clear();

    // Update plateau values and the generation
    if(lastbest <= pool[0].Fitness) platSize++;
    else lastbest = pool[0].Fitness;

    // Per-generation information update
    if(verbose) {
      printf("Generation %d's best has fitness %d\n", generation, pool[0].Fitness);
      auto t2 = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
      printf("  Generation %d took %.3f ms\n", generation, ((float)duration)/1000);
    }

    generation++;
  }

  if(verbose)
     printf("Solution found after %d generations, with fitness %d\n", generation+1, pool[0].Fitness);

  return pool[0];
}

double average(vector<int> v) {
  double sum;
  for (auto i : v) sum += i;

  return (sum/v.size());

}

// Returns a tuple with the average fitness values and the average time cost to find the solution
vector<float> RunGame(vector<NDETree> pool, NDETree goal, int repeats, FitnessCalculator &fc, char xof, DataHandler& dh, bool verbose = true) {
  int fitsum = 0; // Sum of the fitnesses

  // Keeping track of calculation time
  auto t1 = std::chrono::high_resolution_clock::now();

  float foundcount = 0;

  for(auto i =0; i< repeats; ++i) {
    auto tree = Play(pool, goal, fc, xof, verbose = verbose);

    if(verbose || true) {
      auto t2 = std::chrono::high_resolution_clock::now();
      auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
      printf("Generated solution: \n");
      tree.Print();
      printf("Calculating this tree took %.3f seconds\n", ((float)duration)/1000000);
    }

    fitsum += tree.Fitness;
    //tree.SubTreeSort(0);
    if(dh.CheckSolution(tree)) {
      foundcount += 1;

      if(verbose)
	      printf("Found the %.0fth solution!\n", foundcount);
    }
  }
  auto t2 = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

  // Output the average fitness and the average time per found solution
  return { fitsum / repeats, ((float)duration)/(1000000 * repeats), foundcount };
}


vector<string> getForbidden(string ts) {
  if(ts == PRELIMINARY)
    return { string("copper-cable") };
  else if(ts == IMAGEMAGICK) {
    if(CASE == '1')
      return { string("imagemagick-draw-square") };
    if(CASE == '2')
      return { string("create-flag-two-op"), string("create-flag-three-op") };
    if(CASE == '3')
      return { string("create-flag-two-op"), string("create-flag-three-op") };
    if(CASE == '4')
      return { string("select-colour-string") };
  } else if(ts == FACTORIO) {
    if(CASE == '1')
      return { string("sulfur") };
    if(CASE == '2')
      return { string("steel-plate"), string("form-steel") };
    if(CASE == '3')
      return { string("steel-plate"), string("recover-steel") };
    if(CASE == '4')
      return { string("electronic-circuit") };
  } else if(ts == EMBOSS) {
  }
  return { string("nonne") };
}

// Switch function for generating the population pool
vector<NDETree> getPopulation(map<string, Tool> usableTools, vector<Tool> tools, NDETree goal) {
  if(GENERATOR == 'r') {
    printf("There is a bug with random generation!! \n");
    return GenerateInitialPopRandomly(tools, goal);
  } // Default is to generate it using randomreplace
  return GenerateInitialPopRandomReplace(usableTools, tools, goal);
}

// Commandline arguments will be:
// None: reverts to default values
// Otherwise:
// Poolsize, crossover function, mutation chance, crossover chance
int main(int argc, char **argv) {
  // =============================================================
  // =================== Initalize some values ===================
  // =============================================================
  char xof = ECOCONST;
  string ts = PRELIMINARY;

  if (argc > 1) {
    POOLSIZE = atof(argv[1]);
    xof = argv[2][0];
    mutChance = atof(argv[3]);
    xoChance = atof(argv[4]);
  }

  // A switch for verbose output or not
  for(auto i = 5; i < argc; i++) {

    // Enable verbose output
    if(strcmp(argv[i], "-v") == 0)
       verbose = true;

    // Set the amount if repeating tests
    else if(strcmp(argv[i], "-r") == 0)
       REPEATS = atof(argv[++i]);
    else if(strcmp(argv[i], "-f") == 0)
       FITNESS = argv[++i][0];
    else if(strcmp(argv[i], "-t") == 0)
       ts = string(argv[++i]);
    else if(strcmp(argv[i], "-c") == 0)
       CASE = argv[++i][0];
    else if(strcmp(argv[i], "-g") == 0)
       GENERATOR = argv[++i][0];

  }

  // Seed the random
  srand(time(0));

//  printf("TODO: \n * Edit distance \n\n");


  // =============================================================
  // ========================== Dataset ==========================
  // =============================================================
  // Retrieve the dataset
  auto t1 = std::chrono::high_resolution_clock::now();
  DataHandler data = DataHandler(ts, getForbidden(ts), CASE);
  
  // printf("Retrieved the tools! \n");
  vector<Tool> tools = data.tools;
  // for(auto t: tools) printf("%s\n", t.name.c_str());


  auto usableTools = data.toolset;

  // =============================================================
  // Retrieve the tree
  // =============================================================

  NDETree goal = data.GetTree(CASE);
  if(verbose) {  
     printf("\nTrying to reconstitute this workflow: \n");
     goal.Print();
  }


 
  // The fitness calculator object
  FitnessCalculator test(goal);
  
  // Let's try generating a pool completely at random
//  pool = GenerateInitialPopRandomly(tools, goal);

  vector<NDETree> pool = getPopulation(usableTools, tools, goal);
//  for(auto t:pool)
//     t.Print();

  vector<float> res = RunGame(pool, goal, REPEATS, test, xof, data, verbose);
  
  // Poolsize, size of toolset, p(mut), p(xo), goal-tree size, crossover function, fitness function, avg fitness, avg calctime, optimals found, testcase
  printf("%d & %d & %.2f & %.2f & %d & %c & %c & %.2f & %.2fs & %.0f & %c\\\\ \n", POOLSIZE, tools.size(), mutChance, xoChance, goal.Tools.size(), xof, FITNESS, res[0], res[1], res[2], CASE);
  fflush(stdout);

  return 0;
}
