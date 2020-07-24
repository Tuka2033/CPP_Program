#include"Person.h"
class cEmployee : cPerson
{
	int eId;
	float salary;
public:
	cEmployee();
	cEmployee(const char*, const char*, int, float);
	void Accept();
	void Display();
};