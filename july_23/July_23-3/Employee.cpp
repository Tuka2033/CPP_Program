#include"Employee.h"
int cEmployee::cnt = 0;
cEmployee::cEmployee()
{
	id = cnt;
	sal = 0;
	cnt++;
}
cEmployee::cEmployee(const char *nm, int d, int m, int y, float s):eName(nm),doj(d,m,y)
{
	id = cnt;
	sal = s;
	cnt++;
}
void cEmployee::Accept()
{
	cout << "\nEnter a employee name::";
	eName.Accept();
	cout << "\nEnter Date of joining(dd/mm/yy)::";
	doj.Accept();
	cout << "\nEnter Salary::";
	cin >> sal;
}
void cEmployee::Display()
{
	cout << "\nEmployee ID::" << id;
	cout << "\nEmployee Name::";
	eName.Display();
	cout << "\nDate of joining::";
	doj.Display();
	cout << "\nSalary::"<<sal;
	cout << "\n==============================================";
}