#ifndef COMMON
#include "common.h"
#endif

// Import the toolset generators
#include "../src/datagenerators/imagemagickGenerator.cpp"
#include "../src/datagenerators/factorioGenerator.cpp"
#include "../src/datagenerators/factorioSolution.cpp"
#include "../src/datagenerators/embossGenerator.cpp"

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
    DataHandler(string toolsetname, vector<string> forbiddentools, char casenum) {

    // Store the name of the required toolset	
    cn = casenum;
    tsn = toolsetname;

    // Now select which toolset we use and create it
    if(toolsetname == FACTORIO) {
       tools = _getFactorio();   
    } 
    else if(toolsetname == PRELIMINARY) {
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
       toolset[t.id.c_str()] = t;
       dataset[t.id.c_str()] = t;
    }

    for(auto n : forbiddentools) {
	auto ind = toolset.find(n);
        if (ind == toolset.end())
	   continue;
	
	toolset.erase(toolset.find(n));

	tools.erase(remove_if(begin(tools), end(tools), [n](Tool const& u)
        {
           return u.id == n;
        }), end(tools));
    }
  }

  NDETree GetTree(char casenum) {
    if (tsn == PRELIMINARY)
      return _getPreliminaryTree();
    else if (tsn == IMAGEMAGICK)
    {  
       if(casenum == '1') return _getIMCone();
       if(casenum == '2') return _getIMCtwo();
       if(casenum == '3') return _getIMCthree();
       if(casenum == '4') return _getIMCfour();
    }
    else if (tsn == FACTORIO)
      return _getFactorioTree();
    else if (tsn == EMBOSS)
      return _getBiotoolsTree();
  }
  
  // Solution helepr for the check solution function
  NDETree _getSolution() {
    if (tsn == IMAGEMAGICK)
    {  
       Tool t = toolset["output"]; 
       if(cn == '1') return _getIMSone();
       if(cn == '2') return _getIMStwo();
       if(cn == '3') return _getIMSthree();
       if(cn == '4') return _getIMSfour();
    }
    else if (tsn == FACTORIO)
      return _getFactorioTree();

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

    if(tsn == IMAGEMAGICK) {
       tree.CalculateOperatorLD();
       auto control = _getSolution();
       control.CalculateOperatorLD();

       // Unfortunately this piece of code has to be copied every single case.. I think
       for(auto d = 0; d < control.oLD.size(); d++)
         for(auto i = 0; i < control.oLD[d].size(); i++) 
            if(control.oLD[d][i] != tree.oLD[d][i]) 
               return false;


       return true;
    }

    return false;
  }
  char cn;
  map<string, Tool> dataset, toolset;
  vector<Tool> tools;

  string tsn;

private:
  vector<Tool> _getImageMagick() {
    // We need an output tool.
    Tool outp;
    outp.type = "tool";
    outp.output = "none";
    outp.inTypes = { "image" };
    
    // Get the toolset and append it with the output tool
    auto ts = imagemagick();
    ts.push_back(outp);

    return ts;
  }

  vector<Tool> _getFactorio() {
    auto tsn = Factorio();
    for (auto t : FactorioSolution())
      tsn.push_back(t);
    return tsn;
  }

  vector<Tool> _getEMBOSS() {
    auto bt = biotools();

    Tool input;
    input.type = "resource";
    input.id = "input";
    input.output =  "http://edamontology.org/data_0857";
    
    bt.push_back(input);
    return bt;
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
  // ========================= Factorio ==========================
  // =============================================================


  NDETree _getFactorioTree() {
     auto tools = {
       dataset["laser-turret"],
         dataset["electronic-circuit"],
	   dataset["iron-plate"],
	     dataset["iron-ore"],
	   dataset["copper-cable"],
	     dataset["copper-plate"],
	       dataset["copper-ore"],
       dataset["steel-plate"],
         dataset["iron-plate"],
	   dataset["iron-ore"],

       dataset["battery"],
	 dataset["iron-plate"],
	   dataset["iron-ore"],
	 dataset["copper-plate"],
	   dataset["copper-ore"],
	 dataset["sulfuric-acid"],
	   dataset["iron-plate"],
	     dataset["iron-ore"],
	   dataset["water"],
	   dataset["sulfur"],
	     dataset["petroleum-gas"],
	     dataset["water"]
     };

     auto depths = {
       0, 1, 2, 3, 2, 3, 4,
          1, 2, 3,
	  1, 2, 3, // Battery begins here
	     2, 3,
	     2, 3, 4,
	        3,
	        3, 4, 4
     };

     NDETree goal(tools, depths);
     goal.Fitness = 0;
     return goal;
  }

  // =============================================================
  // ======================== ImageMagick ========================
  // =============================================================
  NDETree _getIMCone() {
    auto tools = {
     dataset["output"],
      dataset["imagemagick-draw-square"],
        dataset["imagemagick-new"],
          dataset["user-input-string"],
          dataset["user-input-int"],
	  dataset["select-colour-string"],
	    dataset["user-input-string"]
    };
    auto depths = {
      0, 1, 2, 3, 3, 3, 4
    };
    
    return NDETree(tools, depths);
  }

  NDETree _getIMSone() {
    auto tools = {
      dataset["imagemagick-draw-rectangle"],
        dataset["imagemagick-new"],
          dataset["user-input-string"],
          dataset["user-input-int"],
	  dataset["select-colour-string"],
	    dataset["user-input-string"]
    };
    auto depths = {
      0, 1, 2, 2, 2, 3
    };
    
    return NDETree(tools, depths);
  }

  // The tree for case two:
  // We have our one-bar flag tool
  NDETree _getIMCtwo() {
    auto tools = {
     dataset["output"],
      dataset["create-flag-two-op"],
        dataset["user-input-string"],
	dataset["user-input-int"],
	dataset["select-colour-string"],
	  dataset["user-input-string"]
    };
    auto depths = {
      0, 1, 2, 2, 2, 3
    };
    
    return NDETree(tools, depths);
  }

  NDETree _getIMStwo() {
    return _getIMCone();
  }

  // new image + draw square are decayed
  NDETree _getIMCthree(){
    return _getIMCone();
  };

  NDETree _getIMSthree() {
    return _getIMCtwo();
  }
 
 // Get the tree for case four: 
  NDETree _getIMCfour() {
    auto tools = {
     dataset["output"],
        dataset["imagemagick-draw-square"],
          dataset["imagemagick-new"],
            dataset["user-input-string"],
            dataset["user-input-int"],
	    dataset["select-colour-string"],
	      dataset["user-input-string"]
    };
    auto depths = {
      0, 1, 2, 3, 3, 3, 4
    };
    
    return NDETree(tools, depths);
  }

  // Solution four:
  NDETree _getIMSfour() {
    auto tools = {
      dataset["draw-flag-two-op"],
        dataset["user-input-string"],
        dataset["user-input-int"],
	dataset["select-colour-rgb"],
	  dataset["user-input-int"]
    };
    auto depths = {
      0, 1, 1, 1, 2
    };
    
    return NDETree(tools, depths);
  }

  // =============================================================
  // ======================== Preliminary ========================
  // =============================================================
  NDETree _getBiotoolsTree() { 
    // Retrieve the workflow
    auto tools = {
      dataset["profisis"], dataset["biogrid"], dataset["blast"], dataset["input"]
    };
    auto depths = {0, 1, 2, 3};
    
    return NDETree(tools, depths);
  }


};
