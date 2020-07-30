#include"Date.h"
void main()
{
	cDate d1;
	d1.display();
	cDate d2(30,9,1996);
	d2.display();
	d2.setDate(3);
	d2.display();
	d1.setYear(2020);
	d1.display();
	cDate d3;
	d3.Accept();
	d3.display();
}