#include<iostream>
using namespace std;
class cBox
{
	int capacity;
public:
	cBox();
	cBox(int);
	void display();
	void accept();
	int operator >(cBox&);
};