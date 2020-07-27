#include"math.h"
#include"math1.h"
#ifndef CAL
#define CAL
class calculator : math1, math2
{
	int d, m, a, s;
public:
	calculator();
	calculator(int, int);
	void Display();
};
#endif