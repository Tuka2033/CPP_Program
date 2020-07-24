#include"Square.h"
cSquare::cSquare()
{
	side = 0;
}
cSquare::cSquare(float s)
{
	side = s;
}
void cSquare::calculateArea()
{
	float area;
	area = side * side;
	cout << "\n\nArea of Square is::" << area;
}