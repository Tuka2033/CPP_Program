#include"Employee.h"
Emp::Emp()
{
	eid = 0;
	ln = 1;
	sal = 0;
	name = new char[ln + 1];
	strcpy(name, " ");
}
Emp::Emp(int id, char* nm, int sa)
{
	eid = id;
	ln = strlen(nm);
	name = new char[ln + 1];
	strcpy(name, nm);
	sal = sa;
}
void Emp::Accept()
{
	char nm[50];
	cout << "\nEnter Emp id::";
	cin >> eid;
	cout << "Enter Emp name:";
	cin >> nm;
	ln = strlen(nm);
	name = new char[ln + 1];
	strcpy(name, nm);
	cout << "\nEnter Salary::";
	cin >> sal;
}
void Emp::display_e()
{
	cout << "\t\tEid   :\t" << eid << "\n" << "\t\tName  :\t" << name << "\n" << "\t\tsalary:\t" << sal << endl;
}