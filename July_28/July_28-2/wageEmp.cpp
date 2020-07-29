#include"Wageemp.h"
cWageEmployee::cWageEmployee()
{
	noHrs = 0;
	ratePerhrs = 0;
}
cWageEmployee::cWageEmployee(const char* n, const char* a, const char* c, int pi, const char* ca, const char* cc, int cpi, int dd, int mm, int yy, float sal, int hr, float rate) :cEmployee(n, a, c, pi, ca, cc, cpi, dd, mm, yy, sal)
{
	noHrs = hr;
	ratePerhrs = rate;
}
void cWageEmployee::Accept()
{
	cEmployee::Accept();
	cout << "\nEnter No hrs::";
	cin >> noHrs;
	cout << "\nEnter rate per  hrs::";
	cin >> ratePerhrs;
}
void cWageEmployee::Display()
{
	cEmployee::Display();
	cout << "\nNo of extra hrs::" << noHrs;
	cout << "\nRate  per  hrs::" << ratePerhrs;
	cout << "\nTotal Salary::" << calculateSalary();
	cout << "\n==============================================";
}
int cWageEmployee::calculateSalary()
{
	float Salary;
	Salary = sal + (noHrs * ratePerhrs);
	return Salary;
}