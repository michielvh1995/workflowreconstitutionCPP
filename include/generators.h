
bool treeCompare(const NDETree& a, const NDETree& b)
{
    // smallest comes first
    return a.Fitness < b.Fitness;
}


NDETree GenerateRandomTree(int mdepth, int size, vector<Tool> toolset, Tool root) {
  // Set the root node
  vector<Tool> tools(size);
  tools[0] = root;

  vector<int> depths = {0};

  // Now to calculate the rest...
  int depth = 1;
  for(auto i = 1; i < size; ++i) {
    // Insert a random tool
    tools[i] = toolset[rand() % toolset.size()];
    depths.push_back(depth);
    
    // Now to calculate the depth of the next node
    if(rand() % 2) depth = min(depth+1, mdepth);
    else if (rand() % 2) depth = max(depth-1,1);  
  }

  return NDETree(tools, depths);
}

vector<NDETree> GenerateInitialPopRandomly(vector<Tool> toolset, NDETree goal) {
  vector<NDETree> pool;
  goal.Print(); 

  for (auto i = 0; i< POOLSIZE; ++i) {
    // Determine what the maximum depth is, this is done by taking the depth of the original
    //  then it is changed according to its depth/size
     
    int md = ceil((float) (2 * goal.mdepth) / (float)goal.Depths.size());
    int ld = (int) ((float) goal.Depths.size()) / 10;
    
    int diff = (int) (rand() % md);
    int difl = (int) (rand() % ld);
    
    auto tree = GenerateRandomTree(goal.mdepth + diff, goal.Depths.size() + difl, toolset, goal.Tools[0]);
    pool.push_back(tree);
  }
  return pool;
}

vector<NDETree> GenerateInitialPopOriginalOnly(vector<Tool> toolset, NDETree goal) {
  // Generate the initial population by copying the goal tree a million times
  vector<NDETree> pool;

  for (auto i = 0; i< POOLSIZE; ++i) pool.push_back(NDETree::Copy(goal));

  return pool;
}

vector<NDETree> GenerateInitialPopRandomReplace(map<string, Tool> toolbox, vector<Tool> toolset, NDETree goal) {
  // Generate the initial population by copying the goal tree a million times
  //  however, this function also checks whether or not the tree has missing tools. Those are randomly filled in
  vector<NDETree> pool;
  vector<int> missingInds;

  // Gather which tools are missing
  for(auto i = 0; i < goal.Tools.size(); ++i)
     if (toolbox.count(goal.Tools[i].id) == 0) missingInds.push_back(i);

  // DEBUG:
  printf("There are %d tools missing, namely:\n", missingInds.size());
  for(auto i : missingInds)
     printf("  %s\n", goal.Tools[i].id.c_str() );
  printf("  \n" );

  for (auto i = 0; i < POOLSIZE; ++i) {
    auto tree = NDETree::Copy(goal);

    for(auto j : missingInds) {
      tree.Tools[j] = toolset[rand() % toolset.size()];
    }
    pool.push_back(tree);
  }

  return pool;
}

