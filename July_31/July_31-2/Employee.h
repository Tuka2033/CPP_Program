#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
#ifndef EMP_
#define EMP_
class Emp
{
	int eid;
	char* name;
	int ln;
protected:
	int sal;
public:
	Emp();
	Emp(int, char*, int);
	void Accept();
	void display_e();
};
#endif
