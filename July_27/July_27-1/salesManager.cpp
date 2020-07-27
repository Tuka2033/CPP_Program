#include"salesManager.h"
cSalesmanager::cSalesmanager()
{

}
cSalesmanager::cSalesmanager(const char *n, const char *a, const char *c, int pi, const char *ca,const char *cc, int cpi, int dd, int mm, int yy, float sal, int s, float co,int t,int d):cEmployee(n, a, c, pi, ca, cc, cpi, dd, mm, yy, sal) ,cManager(n, a, c, pi, ca, cc, cpi, dd,mm, yy, sal,t,d),cSalesPerson(n, a, c, pi, ca, cc, cpi, dd, mm, yy, sal,s,co)
{

}
void cSalesmanager::Accept()
{
	cEmployee::Accept();
	cManager::Accept();
	cSalesPerson::Accept();
}
void cSalesmanager::Display()
{
	cEmployee::Display();
	cManager::Display();
	cSalesPerson::Display();
	cout << "\nTotal Salary::" << calculateSal();
	cout << "\n==============================================";
}
float cSalesmanager::calculateSal()
{
	float salary;
	salary = cEmployee::getsal() + cManager::getta() + cManager::getda()+(cSalesPerson::getsale() * cSalesPerson::getcomm());
	return salary;

}
