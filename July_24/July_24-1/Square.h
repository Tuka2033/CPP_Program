#include"Shape.h"
class cSquare : public cShape
{
	float side;
public:
	cSquare();
	cSquare(float);
	void calculateArea();
};