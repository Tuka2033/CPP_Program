#include"Employee.h"
int cEmployee::cnt = 0;
cEmployee::cEmployee()
{
	id = cnt;
	len = 0;
	name = new char[len + 1];
	name[0] = '\0';
	cnt++;
}
cEmployee::cEmployee(const char* nm)
{
	id = cnt;
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
	cnt++;
}
void cEmployee::Accept()
{
	cout << "Enter a name:";
	cin >> name;
	cout << endl;
}
void cEmployee::Display()const
{
	cout <<"ID::"<<id<<"\n"<<"Name:"<< name << endl;
}