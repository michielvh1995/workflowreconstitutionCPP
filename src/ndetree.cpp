#include "ndetree.h"

void NDETree::CalcAddSubTreeCorrectness(int ind) {
  // Calculate whether the subtree starting at index ind is correct
  
  int d = Depths[ind];	// The depth of the node
  int td = d + 1;	// The target depth

  // First we check if we are dealing with a leaf:
  if (Tools[ind].inTypes.size() == 0) {
     // Are there nodes below this one?
     for(auto i = ind + 1; ind < Tools.size();i++) {
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

  // Now the ones we got...
  for(auto i = ind + 1; ind < Tools.size();i++) {
    if(Depths[i] < td) break; 	// If the subtree ends
    if(Depths[i] ==td) {        // Get each child node
       CalcAddSubTreeCorrectness(i); // Calculate the added fitness for these
       ins.push_back(Tools[i].outputs[0].type);
     }
  }
  
  sort(ins.begin(), ins.end());

  // Calculate the difference between the two lists  
  vector<string> diff; 
  set_difference(ins.begin(), ins.end(), Tools[ind].inTypes.begin(), Tools[ind].inTypes.end(), 
		  inserter(diff, diff.begin()));
  
  // And update the fitness value with the difference
  Fitness += diff.size();
};
