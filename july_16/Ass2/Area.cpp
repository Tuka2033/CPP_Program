#include"Area.h"
cArea::cArea()
{
	length = 0;
	breadth = 0;
}
cArea::cArea(float ln, float br)
{
	length = ln;
	breadth = br;
}
void cArea::display()
{
	cout << "Area is:" << calculateArea() << endl;
}
double cArea::calculateArea()
{
    double area = (double)length * (double)breadth;
	return area;
}