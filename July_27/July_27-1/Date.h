#include<iostream>
using namespace std;
#ifndef DATE
#define DATE
class cDate
{
	int date, month, year;
public:
	cDate();
	cDate(int, int, int);
	void Accept();
	void Display();
};
#endif