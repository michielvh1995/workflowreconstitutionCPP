#ifndef COMMON
#include "common.h"
#endif

#define NDE

// The tree class
class NDETree {
public:
  NDETree(vector<Tool> tools, vector<int> depths){
     Tools   = tools;
     Depths  = depths;
     Fitness = MAXINT;

     // Set the maximum depth of the tree
     mdepth = *max_element(depths.begin(), depths.end());
  };


  // Public variables
  int Fitness;
  int mdepth;

  // The layer decomposition
  vector<vector<string>> oLD;
  vector<Tool> Tools;
  vector<int> Depths;

  // Helper functions
  void CalculateOperatorLD();
  void MoveSubTree(int from, int to);
  void SubTreeSort(int pid);
  int GetSubTreeLength(int ind);
  void Print();


  static NDETree Copy(NDETree tree) { return NDETree(tree.Tools, tree.Depths); }

  int size() { return Tools.size(); }

  // =================================================================
  // ====================== Operators ================================
  // =================================================================
  // Crossover
  static NDETree ECO(NDETree* base, NDETree* ref);
  static NDETree SubTreeExchange(NDETree* a, NDETree* b);

  // Mutation
  void EPO(int from, int to);

  // The fitness functions
  void CalcAddSubTreeCorrectness(int ind = 0);

  // Class Operators
  bool operator<(const NDETree b) { return Fitness < b.Fitness;}
private:
  NDETree subTreeSortHelper(int pid);
};
