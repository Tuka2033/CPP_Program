/*#include"Wageemp.h"
int main()
{
	cWageEmployee W;
	W.Display();
	cWageEmployee W1("Tuka","AWB","SILLOD",431135,"pune","pune",123456,12,2,2020,12000,5,100);
	W1.Display();
}*/
#include"salesPerson.h"
int main()
{
	cSalesPerson s;
	s.Display();
	cSalesPerson s1("Abhi", "NSK", "NSK", 431135, "AWB", "SILLOD", 654321, 12, 2, 2022, 12000, 5, 100);
	s1.Display();
	cSalesPerson s2;
	s2.Accept();
	s2.Display();
}