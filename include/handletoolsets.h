#ifndef COMMON
#include "common.h"
#endif

#include "../data/imagemagickGenerator.cpp"
#include "../data/factorioGenerator.cpp"



// To compare whether two workflows are exactly the same
static bool treeComp(NDETree& a, NDETree& b) {
  if (a.size() != b.size()) return false;

  // There exist no tool comparison..
  for(auto i = 0; i < a.size(); i++)
    if(a.Tools[i] != b.Tools[i] || a.Depths[i] != b.Depths[i])  
	    return false;

  return true;
}

class DataHandler {
public:
    DataHandler(string toolsetname, vector<string> forbiddentools) {
    tsn = toolsetname;
    
    if(toolsetname == FACTORIO || toolsetname == PRELIMINARY) {
       tools = _getFactorio();
       ExpandFactoriotoolset();
    }
    else if(toolsetname == IMAGEMAGICK) 
       tools = _getImageMagick();
    else if(toolsetname == EMBOSS)
       tools = _getEMBOSS();

    // Initialize the datasets
    dataset = map<string, Tool>();
    toolset = map<string, Tool>();

    // Toolset is the pruned dataset, where the broken tools are removed from
    for(auto t: tools) {
       for(auto n : forbiddentools)
          if(n != t.id)
            toolset[t.id.c_str()] = t;
       dataset[t.id.c_str()] = t;
    }

    for(auto n : forbiddentools)
	tools.erase(remove_if(begin(tools), end(tools), [n](Tool const& u)
        {
           return u.id == n;
        }), end(tools));
  }

  NDETree GetTree() {
    if (tsn == PRELIMINARY)
      return _getPreliminaryTree();
    else if (tsn == IMAGEMAGICK)
      return _getImageMagickTree();
  }


  void ExpandFactoriotoolset() {
    // Call this function to expand the factorio toolsets with the new, alternative tools!
    Tool iron_cable;
    iron_cable.name = "iron-cable";
    iron_cable.id = "copper-cable-alt";
    iron_cable.operations = {"copper-cable"};
    iron_cable.type = "tool";
    iron_cable.inTypes = {"iron-plate"};
    iron_cable.output = "copper-cable";

    Input ins;
    ins.label = "input1";
    ins.type = "iron-plate";

    iron_cable.inputs = {ins};

    toolset["copper-cable-alt"] = iron_cable;
    tools.push_back(iron_cable);

  }

  bool CheckSolution(NDETree& tree) {
    if(tsn == PRELIMINARY)
      return _checkPreliminarySolution(tree);

//    if(tsn == FACTORIO)
//      return _checkFactorioSolution(tree);

    if(tsn == IMAGEMAGICK)
      return _checkImageMagickSolution(tree);

    return false;
  }

  map<string, Tool> dataset, toolset;
  vector<Tool> tools;

  string tsn;

private:
  vector<Tool> _getImageMagick() {
    return imagemagick();
  }

  vector<Tool> _getFactorio() {
    return Factorio();
  }

  vector<Tool> _getEMBOSS() {
    printf("Not yet implemented!\n");
    return _getFactorio();
  }


// =============================================================
// ======================== Preliminary ========================
// =============================================================

  bool _checkPreliminarySolution(NDETree& tree) {
  // Check whether or not the solution is correct for the preliminary tests
  NDETree goal({
    toolset["electronic-circuit"],
		   toolset["copper-cable-alt"],
		      toolset["iron-plate"],
		   toolset["iron-ore"],
		      toolset["iron-plate"],
		         toolset["iron-ore"]},
		  { 0, 1, 2, 3, 1, 2});

    tree.SubTreeSort(0);

    return treeComp(goal, tree);
  }

  // Hardcoded function to get the preliminary goal tree
  NDETree _getPreliminaryTree() {
    NDETree goal({
      dataset["electronic-circuit"],
        dataset["copper-cable"],
	  dataset["copper-plate"],
	    dataset["copper-ore"],
	dataset["iron-plate"],
	  dataset["iron-ore"]},
      {0,1,2,3,1,2});

    goal.Fitness = 0;
    return goal;
  }


  // =============================================================
  // ======================== ImageMagick ========================
  // =============================================================

  NDETree _getImageMagickTree() {
    // What tree do we want for ImageMagick?
    auto tools = {
     dataset["imagemagick-draw-square"],             // Draw upper rectangle
       dataset["user-input-int"], dataset["user-input-int"], 
       dataset["user-input-int"], dataset["user-input-int"], 
       dataset["user-input-string"],
       dataset["select-colour"],
         dataset["user-input-string"],
       dataset["imagemagick-draw-square"],           // Draw lower rectangle
         dataset["user-input-int"], dataset["user-input-int"], 
         dataset["user-input-int"], dataset["user-input-int"], 
         dataset["user-input-string"],
         dataset["select-colour"], 
           dataset["user-input-string"],
         dataset["imagemagick-new"],     // Make a new white image
	   dataset["user-input-int"],
	   dataset["user-input-int"],
	   dataset["user-input-string"],
    };

    auto depths = { 
     0, 1, 1, 1, 1, 1, 1, 2,    // Draw the upper rectangle
        1, 2, 2, 2, 2, 2, 2, 3,  // Draw the lower rectangle
	   2, 3, 3, 3             // Get the new image with a white background
     };

    return NDETree(tools, depths);
  }

  bool _checkImageMagickSolution(NDETree tree) {
    auto tools = {
     dataset["imagemagick-draw-square"],             // Draw upper rectangle
       dataset["user-input-int"], dataset["user-input-int"], 
       dataset["user-input-int"], dataset["user-input-int"], 
       dataset["str-parse-int"],
         dataset["user-input-int"],
       dataset["select-colour"],
         dataset["str-parse-int"],
           dataset["user-input-int"],
       dataset["imagemagick-draw-square"],           // Draw lower rectangle
         dataset["user-input-int"], dataset["user-input-int"], 
         dataset["user-input-int"], dataset["user-input-int"], 
         dataset["str-parse-int"],
           dataset["user-input-int"],
         dataset["select-colour"], 
           dataset["str-parse-int"],
             dataset["user-input-int"],
         dataset["imagemagick-new"],     // Make a new white image
	   dataset["user-input-int"],
	   dataset["user-input-int"],
           dataset["str-parse-int"],
             dataset["user-input-int"],
    };

    auto depths = { 
     0, 1, 1, 1, 1, 1, 2, 1, 2, 3,    // Draw the upper rectangle
        1, 2, 2, 2, 2, 2, 3, 2, 3, 4,  // Draw the lower rectangle
	   2, 3, 3, 3, 4               // Get the new image with a white background
     };

    // Generate the goal tree
    NDETree g(tools, depths);

    // Sort and compare the trees
    g.SubTreeSort(0);
    tree.SubTreeSort(0);
    
    printf("\n\n\n");
    g.Print();
    tree.Print();
    printf("\n\n\n");
    
    return treeComp(g, tree);
  }



};
