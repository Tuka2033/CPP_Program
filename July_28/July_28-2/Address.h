#include"cString.h"
#ifndef ADDR
#define ADDR
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
#endif