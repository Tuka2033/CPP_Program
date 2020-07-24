#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cPerson
{
	char *name,*Addr;
public:
	cPerson();
	cPerson(const char*, const char*);
	void Accept();
	void Display();
	~cPerson();
};