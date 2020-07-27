#include"manager.h"
#include"salesPerson.h"
#ifndef SALESMANAGER
#define SALESMANAGER
class cSalesmanager:cManager,cSalesPerson
{
public:
	cSalesmanager();
	cSalesmanager(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float, int, float,int,int);
	void Accept();
	void Display();
	float calculateSal();
};
#endif