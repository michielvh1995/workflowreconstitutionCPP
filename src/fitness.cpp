#include "fitness.h"

int FitnessCalculator::CalculateLDValue(NDETree* tree) {
  // Calculates the Layer Decomposition value of the tree
  if(true || !tree->oLD.size())  
  {	  tree->CalculateOperatorLD();
    // printf("Calculated OLD\n");
  }
  
  int fitness = 0;
  
  
  // Check per depths what the difference is:
  for(auto d = 0; d < min(tree->mdepth, Goal.mdepth); d++) {
     diff.clear();
     set_symmetric_difference(
	tree->oLD[d].begin(),
	tree->oLD[d].end(),
	Goal.oLD[d].begin(),
	Goal.oLD[d].end(),
	inserter(diff, diff.begin())
     );
     fitness += diff.size();
  }
  
  // The bug occurs in this part
  if(tree->mdepth > Goal.mdepth) {
     //printf("tree depth: %d goal depth: %d\n", tree.mdepth, Goal.mdepth);
     for(auto d = Goal.mdepth; d < tree->mdepth; ++d) { 
	fitness += tree->oLD[d].size();
       // printf("l%d: %s\n", d, tree.oLD[d][0].c_str());
     }
  }
  else if(tree->mdepth < Goal.mdepth) {
     for(auto d = tree->mdepth; d < Goal.mdepth; ++d)
	 fitness += Goal.oLD[d].size();
  }
  if (false && fitness < 0) {
     printf("The error has occured: fitness value is %d! The faulty tree is: \n", fitness);
     tree->Print();
     printf( "\n");
     fflush(stdout);
  }
  return fitness;
}

int FitnessCalculator::CalculateSubTreeCorrectness(NDETree* tree) {
  // Calculates whether the in- and output types of the wrkflow are correct
  
  // We can do so recursively: by adding the value of each subtree
  // How do we do so efficiently?
  int fitness=0;
  
  for(auto j = 0; j < tree->size(); j++) {
    given.clear();
    diff.clear();
    int i = j;
 
    //printf("a");
    //fflush(stdout);  
    while(i+1 < tree->Depths.size() & tree->Depths[++i] > tree->Depths[j] )
      if(tree->Depths[i] == tree->Depths[j]+1)
      {  //printf("Tree.depth.size: %d", tree.Depths.size());
	 //printf("i: %d, size: %d", i, tree.Tools.size());
	 //fflush(stdout);
	 given.push_back(tree->Tools[i].output);
      }
    
    //printf("g ");
    //fflush(stdout);
    // Sort this array
    sort(given.begin(), given.end());
    
    // Find the difference between the required and the given inputs
    set_symmetric_difference(
        given.begin(),
        given.end(),
        tree->Tools[j].inTypes.begin(),
        tree->Tools[j].inTypes.end(),
        inserter(diff, diff.begin())
     );
    
    
    fitness += diff.size();
  }
  return fitness;
  
}


