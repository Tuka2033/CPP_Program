#include"Employee.h"
int cEmployee::cnt = 0;
cEmployee::cEmployee()
{
	id = cnt;
	len = 0;
	name = new char[len + 1];
	name[0] = '\0';
	strcpy(city, " ");
	cnt++;
}
cEmployee::cEmployee(const char* nm,const char cy[])
{
	id = cnt;
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
	strcpy(city, cy);
	cnt++;
}
void cEmployee::setName(const char *nm)
{
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
}
void cEmployee::setCity(const char cy[])
{
	strcpy(city, cy);
}
char* cEmployee::getName()
{
	return name;
}
char* cEmployee::getCity()
{
	return city;
}
void cEmployee::Accept()
{
	cout << "Enter a name:";
	cin >> name;
	cin >> city;
	cout << endl;
}
void cEmployee::Display()const
{
	cout << "ID::" << id << "\n" << "Name::" << name <<"\nCITY::"<<city<< endl;
}