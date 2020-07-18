#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cBook
{
	static int bnm;
	char name[20];
	float Price;
	int bookNumber;
public:
	cBook();
	cBook(const char*, float);
	void Accept();
	void Display();
	void setName(const char*);
	void setPrise(float);
	char* getName();
	float getPrise();
};