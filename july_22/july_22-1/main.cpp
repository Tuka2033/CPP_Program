#include"Complex.h"
int main()
{
	cComplex c1(4.2, 5.3), c2(7.9, 8.5);
	cComplex c3(c2);
	c1.cprint();
	c2.cprint();
	c3.cprint();
	c2 = c1;
	c2.cprint();
	c1 = c2 = c3;
	c1.cprint();
	c2.cprint();
	c3.cprint();
	return 0;
}