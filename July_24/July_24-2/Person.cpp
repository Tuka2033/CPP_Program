#include"Person.h"
cPerson::cPerson()
{
	int len = 0;
	name = new char[len + 1];
	name[0] = '\0';
	Addr = new char[len + 1];
	Addr[0] = '\0';
}
cPerson::cPerson(const char *nm, const char *adr)
{
	int len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
	len = strlen(adr);
	Addr = new char[len + 1];
	strcpy(Addr, adr);
}
void cPerson::Accept()
{
	int len;
	char nm[50], adr[50];
	cout << "\nEnter Name::";
	cin >> nm;
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
	cout << "\nEnter Address::";
	cin >> adr;
	len = strlen(adr);
	Addr = new char[len + 1];
	strcpy(Addr, adr);
}
void cPerson::Display()
{
	cout << "\nName::";
	cout<<name;
	cout << "\nAddress::";
	cout<<Addr;

}
cPerson::~cPerson()
{
	delete []name;
	delete []Addr;
}