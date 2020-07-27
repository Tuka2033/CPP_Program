#include"manager.h"
cManager::cManager()
{
	ta = 0;
	da = 0;
}
cManager::cManager(const char* n, const char* a, const char* c, int pi, const char* ca, const char* cc, int cpi, int dd, int mm, int yy, float sal, int taa, int daa) :cEmployee(n, a, c, pi, ca, cc, cpi, dd, mm, yy, sal)
{
	ta = taa;
	da = daa;
}
int cManager::getta()
{
	return ta;
}
int cManager::getda()
{
	return da;
}
void cManager::Accept()
{
	cEmployee::Accept();
	cout << "\nEnter Total TA::";
	cin >> ta;
	cout << "\nEnter DA::";
	cin >> da;
}
void cManager::Display()
{
	//cEmployee::Display();
	cout << "\nTotal TA::" << ta;
	cout << "\nTotal DA::" << da;
//	cout << "\nTotal Salary::" << calculateSalary();
	//cout << "\n==============================================";
}
float cManager::calculateSal()
{
	float Salary;
	Salary = sal + (ta + da);
	return Salary;
}