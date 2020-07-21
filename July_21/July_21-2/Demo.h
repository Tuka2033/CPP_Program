#include<iostream>
using namespace std;
class cDemo
{
	const int i;
	int& p;
public:
	cDemo(int&,int);
	void Display();
};
