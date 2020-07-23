#include"cPerson.h"

cPerson::cPerson()
{

}
cPerson::cPerson(const char *nm, const char *ar, const char *cy, int p):pName(nm),pAddr(ar,cy,p)
{

}
void cPerson::Accept()
{
	cout << "\nEnter Person name::";
	pName.Accept();
	cout << "\nEnter Address of person::";
	pAddr.Accept();
}
void cPerson::Display()
{
	cout << "\nPerson name::";
	pName.Display();
	cout << "\nAddress of person::";
	pAddr.Display();
}