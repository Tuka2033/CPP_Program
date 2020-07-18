#include"Book.h"
void main()
{
	cBook b;
	b.Display();
	cBook b1("cpp",200);
	b1.Display();
	cBook b2;
	b2.Accept();
	b2.Display();
	b1.setPrise(500);
	b1.Display();
	b2.setName("java");
	b2.Display();
}