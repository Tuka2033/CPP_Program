#include"Complex.h"
void main()
{
	cComplex c1;
	c1.Display();
	c1.showCount();
	cComplex c2(10, 20);
	c2.Display();
	c2.showCount();
	cComplex c3;
	c3.Accept();
	c3.Display();
	c3.showCount();
}