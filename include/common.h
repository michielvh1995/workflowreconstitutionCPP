#define COMMON true

#include <stdlib.h>  // rand, atoi
#include <time.h>    // time
#include <string.h>  // string
#include <vector>    // vector
#include <algorithm> // for
#include <iostream>  // cout etc
#include <map>       // dictionaries
#include <chrono>    // Timing execution time
#include <numeric>   // Accumulate
#include <random>    // additional RNG functionality

using namespace std;

// ==========================================================
// =============== Here we set our constants ================
// ==========================================================
#define MAXINT			1E8

// ==========================================================
// =============== Common objects and classes ===============
// ==========================================================

// Struct for inputs
struct Input {
	string label, type;
};

// Struct for tools
struct Tool {
	string name, type, id, output;
	vector<string> inTypes, operations;
	vector<Input> inputs;

	inline bool operator ==(Tool a) {
	  // printf("Operations 0:");
	  // printf("%s\n", operations[0].c_str());
	  // fflush(stdout);
	  return operations[0] == a.operations[0];
	  // return name == a.name;
	}
	inline bool operator != (Tool a) {
	  if (operations.size() != a.operations.size()) return true;
	  for(auto i = 0; i < operations.size(); i++) if(operations[i] != a.operations[i]) return true;
	  return false;
	}
	inline bool operator <(Tool a) {
	  return name < a.name;
	}
};

// ==========================================================
// ==================== Helper functions ====================
// ==========================================================

// Returns a slice of a given vector.
// Inputs : vector<T>& : source : A generic vector from which the slice is to be taken.
//        : int        : from   : Index of the first element of the new vector
//        : int        : to     : Exlusive index of the last element.
// Outputs: vector<T>  : The slice of the vector.
template<typename T>
vector<T> Slice(vector<T>& source, int from, int to) {
  // Get the beginning and the ending of the slice
  auto start = source.begin() + from;
  auto end   = source.begin() + to;

  // Create and fill in the output vector
  vector<T> res = vector<T>(end-start);

  copy(start, end, res.begin());

  return res;
}
