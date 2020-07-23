#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cEmployee
{
	static int cnt;
	int id;
	int len;
	char* name;
	char city[20];
public:
	cEmployee();
	cEmployee(const char*,const char[]);
	void Accept();
	void Display()const;
	void setName(const char*);
	void setCity(const char[]);
	char* getName();
	char* getCity();
};