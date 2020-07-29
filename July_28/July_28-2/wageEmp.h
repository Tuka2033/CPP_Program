#include"Employee.h"
class cWageEmployee :public cEmployee
{
	int noHrs;
	float ratePerhrs;
public:
	cWageEmployee();
	cWageEmployee(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float, int, float);
	void Accept();
	void Display();
	int calculateSalary();
};