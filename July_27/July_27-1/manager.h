#include"Emp.h"
class cManager :virtual public cEmployee
{
	int ta, da;
public:
	cManager();
	cManager(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float, int, int);
	void Accept();
	void Display();
	float calculateSal();
	int getta();
	int getda();
};