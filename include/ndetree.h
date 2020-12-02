#ifndef COMMON
#include "common.h"
#endif

// The tree class
class NDETree {
public:
	NDETree(vector<Tool> tools, vector<int> depths){
    Tools = tools;
    Depths = depths;
		Fitness = MAXINT;
  };

  void MoveSubTree(int from, int to);

	// The fitness functions: calculates and adds the value of the NDETree to it
	void CalcAddSubTreeCorrectness(int ind = 0);

	// Public variables
	int Fitness;
  vector<Tool> Tools;
  vector<int> Depths;

	int GetSubTreeLength(int ind);
	void Print();

	void EPO(int from, int to);

	static NDETree GenerateRandom();
	static NDETree ECO(NDETree* base, NDETree* ref);

private:
};
