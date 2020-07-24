#include"Shape.h"
class cReactangle : public cShape
{
	float length, breadth;
public:
	cReactangle();
	cReactangle(float, float);
	void calculateArea();
};