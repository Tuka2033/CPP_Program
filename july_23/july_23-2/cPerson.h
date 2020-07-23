#include"Address.h"
class cPerson
{
	cString pName;
	cAddress pAddr;
public:
	cPerson();
	cPerson(const char*, const char*, const char*, int);
	void Accept();
	void Display();
};
