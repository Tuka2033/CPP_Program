#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cString
{
	int len;
	char* name;
public:
	cString();
	cString(const char*);
	cString(const cString&);
	void Accept();
	void Display();
	~cString();
};

