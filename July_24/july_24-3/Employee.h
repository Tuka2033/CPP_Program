#include"Address.h"
#include"Date.h"
class  cEmployee
{
	static int cnt;
	int id;
	cString eName;
	cDate doj;
	cAddress pAddr, cAddr;
protected:
	float sal;
public:
	cEmployee();
	cEmployee(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float);
	void Accept();
	void Display();
	int calculateSalary();
};