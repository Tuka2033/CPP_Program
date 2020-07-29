#include"Wageemp.h"
int main()
{
	cEmployee *e;
	e = new cEmployee();
	e->Display();
	e= new cWageEmployee("Tuka","AWB","SILLOD",431135,"pune","pune",123456,12,2,2020,12000,5,100);
	e->Display();
}
/*#include"salesPerson.h"
int main()
{
	cEmployee *e;
	e = new cEmployee();
	e->Display();
	e= new cSalesPerson("Abhi", "NSK", "NSK", 431135, "AWB", "SILLOD", 654321, 12, 2, 2022, 12000, 5, 100);
	//e->Accept();
	e->Display();
}*/