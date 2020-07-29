#include"Rectangle.h"
cReactangle::cReactangle()
{
	length = 0;
	breadth = 0;
}
cReactangle::cReactangle(float ln, float br)
{
	length = ln;
	breadth = br;
}
void cReactangle::calculateArea()
{
	float area;
	area = length * breadth;
	cout << "\n\nArea of Rectangle is::" << area;
}