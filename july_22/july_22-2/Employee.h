#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cEmployee
{
	static int cnt;
	int id;
	int len;
	char* name;
public:
	cEmployee();
	cEmployee(const char*);
	void Accept();
	void Display()const;
};