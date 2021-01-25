#ifndef NDE
#include "ndetree.h"
#endif

#ifndef COMMON
#include "common.h"
#endif


class FitnessCalculator {
  private:
    // This string array will be used to store the differences in operators for LD and
    //  the difference in subtreecorrectness; what IO mismatches there are
    vector<string> diff, given;  
  public:
    NDETree Goal;
    FitnessCalculator(NDETree goal) : Goal(goal), diff(goal.size()) {
      Goal.CalculateOperatorLD();
    };
    
    int CalculateEditDistance(NDETree *tree);
    int CalculateLDValue(NDETree* tree);
    int CalculateSubTreeCorrectness(NDETree* tree);
    int CalculateSizeDifference(NDETree* tree) {return abs(tree->size() - Goal.size());};
};
