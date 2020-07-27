#include"salesPerson.h"
cSalesPerson::cSalesPerson()
{
	totalSales=0;
	comm=0;
}
cSalesPerson::cSalesPerson(const char* n, const char* a, const char* c,	int pi, const char* ca, const char* cc, int cpi, int dd, int mm, int yy, float sal, int sale, float cm) :cEmployee(n, a, c, pi, ca, cc, cpi, dd, mm, yy, sal)
{
	totalSales = sale;
	comm = cm;
}
void cSalesPerson::Accept()
{
	cEmployee::Accept();
	cout << "\nEnter Total Sale::";
	cin >> totalSales;
	cout << "\nEnter commision::";
	cin >> comm;
}
void cSalesPerson::Display()
{
	cEmployee::Display();
	cout << "\nTotal Sales::" << totalSales;
	cout << "\nTotal Commision::" << comm;
	cout << "\nTotal Salary::" << calculateSalary();
	cout << "\n==============================================";
}
int cSalesPerson::calculateSalary()
{
	float Salary;
	Salary = sal + (totalSales+comm);
	return Salary;
}