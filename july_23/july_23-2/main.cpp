#include"cPerson.h"
int main()
{
	cPerson p;
	p.Display();
	cPerson p1("Tuka", "AWB", "Sillod", 431135);
	p1.Display();
	cPerson p2;
	p2.Accept();
	p2.Display();
}