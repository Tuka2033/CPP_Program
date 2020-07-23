#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cString
{
	int len;
	char* str;
public:
	cString();
	cString(const char*);
	cString(const cString&);
	cString operator +(cString&);
	void show()const;
	cString operator=(const cString& obj);
	friend ostream& operator <<(ostream&, cString& );
};
