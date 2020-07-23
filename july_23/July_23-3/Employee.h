#pragma once
#include"cString.h"
#include"Date.h"
class  cEmployee
{
	static int cnt;
	int id;
	cString eName;
	cDate doj;
	float sal;
public:
	cEmployee();
	cEmployee(const char*, int,int,int,float);
	void Accept();
	void Display();
};