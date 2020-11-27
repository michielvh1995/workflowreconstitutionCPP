#ifndef COMMON
#include "common.h"
#endif





class NDEGame{
public:
	NDEGame(int n, int maxP, int maxG, float mChance, float xChance);
private:
	int n, maxP, maxG; // pool size, max plateau count, max generations
	float xChance, mChance;	// XO chance, mutation chance

};
