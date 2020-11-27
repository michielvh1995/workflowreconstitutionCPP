#define COMMON true

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// ==========================================================
// =============== Here we set our operators ================
// ==========================================================


#define MAXINT 1E8

// ==========================================================
// =============== Common objects and classes ===============
// ==========================================================

// Struct for inputs
struct Input {
	string label, type;
};

// Struct for tools
struct Tool {
	string name, type, id;
	vector<string> operations, inTypes;
	vector<Input> inputs, outputs;
};
