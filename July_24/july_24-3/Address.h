#include"cString.h"
class cAddress
{
	cString area;
	cString city;
	int pin;
public:
	cAddress();
	cAddress(const char*, const char*, int);
	void Accept();
	void Display();
};