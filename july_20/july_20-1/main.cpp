#include"Complex.h"
int main()
{
	cComplex c1(3,1);
	c1.display();
	cComplex c2(-1, 2);
	c2.display();
	cComplex c3;
	c3 = c1 + c2;
	c3.display();
	++c3;
	c3.display();
	c2++;
	c2.display();
	c3--;
	c3.display();
	--c2;
	c2.display();
}