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
#define PRELIMINARY             "p"
#define FACTORIO                "f"
#define EMBOSS	                "e"
#define IMAGEMAGICK             "i"



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
	  if(operations.size() != a.operations.size()) return false;

	  int j = 0, acc = 0; // index of a and accounted for
	  for(auto i = 0; i < operations.size(); i++)
	     if(operations[i] != a.operations[i]) return false;
	     /*for(auto t = j; t < operations.size(); t++)
		if(operations[i] == a.operations[t]) {
	          acc++;
		  j = t; 
		  break;
		}
	  return acc == operations.size();*/
	  return true; 
	}

	inline bool operator != (Tool a) {
	  if (operations.size() != a.operations.size()) // Requires the same amount
	      return true;
	  
	  for(auto i = 0; i < operations.size(); i++)   // And the same operations
	   if(operations[i] != a.operations[i])
	      return true;
	  
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
