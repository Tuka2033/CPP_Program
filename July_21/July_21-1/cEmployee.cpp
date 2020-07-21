#include"Employee.h"
cEmployee::cEmployee()
{
	len = 0;
	name = new char[len + 1];
	name[0] = '\0';
}
cEmployee::cEmployee(const char* nm)
{
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name,nm);
}
void cEmployee::Accept()
{
	cout << "Enter a name:";
	cin >> name;
	cout << endl;
}
void cEmployee::Display()const
{
	cout << name<<endl;
}