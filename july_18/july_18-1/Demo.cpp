#include"Demo.h"
cDemo::cDemo()
{
	a = 0;
	b = 0;
}
cDemo::cDemo(int x, int y)
{
	a = x;
	b = y;
}
void cDemo::display()
{
	cout << a + b<<endl;
}