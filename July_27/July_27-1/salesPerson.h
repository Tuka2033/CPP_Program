#include"Emp.h"
class cSalesPerson :virtual public cEmployee
{
	int totalSales;
	float comm;
public:
	cSalesPerson();
	cSalesPerson(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float, int, float);
	void Accept();
	void Display();
	float calculateSalary();
	int getsale();
	float getcomm();
};
