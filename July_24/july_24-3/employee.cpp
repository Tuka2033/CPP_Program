#include"Employee.h"
int cEmployee::cnt = 0;
cEmployee::cEmployee()
{
	id = cnt;
	sal = 0;
	cnt++;
}
cEmployee::cEmployee(const char* nm, const char *ar, const char *cy, int p, const char*car, const char*ccy, int cp, int d, int m, int y, float s) :eName(nm), doj(d, m, y), pAddr(ar,cy,p), cAddr(car,ccy,cp)
{
	id = cnt;
	sal = s;
	cnt++;
}
int cEmployee::calculateSalary()
{
	return 1;
}
void cEmployee::Accept()
{
	cout << "\nEnter a employee name::";
	eName.Accept();
	cout << "\nEnter Perment Address::";
	pAddr.Accept();
	cout << "\nEnter Current Address::";
	cAddr.Accept();
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
	cout << "\nPerment Address::";
	pAddr.Display();
	cout << "\nCurrent Address::";
	cAddr.Display();
	cout << "\nDate of joining::";
	doj.Display();
}