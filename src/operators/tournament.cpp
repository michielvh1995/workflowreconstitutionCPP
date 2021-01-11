#ifndef COMMON
#include "common.h"
#endif

// Hold tournaments of size k where there are n winners
vector<NDETree> TournamentSelection(vector<NDETree> pool, int k=2, int n=1) {
  vector<NDETree> res;
  
  for (auto i =0; i < pool.size(); ++i) {
    // Do k-tournament selection
    auto ind1 = rand() % pool.size();
    auto ind2 = rand() % pool.size();
   
    if(pool[ind1] < pool[ind2]) res.push_back(pool[ind1]);
    else res.push_back(pool[ind2]);
  }
  return res; 
}
