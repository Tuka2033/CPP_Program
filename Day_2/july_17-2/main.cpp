#include"Person.h"
void main()
{
	cPerson p1;
	p1.Display();
	cPerson p2("Tuka", 24, "AWB");
	p2.Display();
	p1.setAge(10);
	p1.Display();
	p1.setCity("pune");
	p1.Display();
	p1.setName("Abhi");
	p1.Display();

}