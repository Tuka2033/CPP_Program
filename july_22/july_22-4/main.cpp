#include"Employee.h"
void main()
{
	cEmployee e1;
	e1.Display();
	cEmployee e2("Tuka","Pune");
	e2.Display();
	e1.setName("Abhi");
	e1.setCity("AWB");
	e1.Display();
}