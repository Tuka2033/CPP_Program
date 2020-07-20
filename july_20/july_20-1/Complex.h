#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cComplex
{
	int real, img;
public:
	cComplex();
	cComplex(int, int);
	void setReal(int);
	void setImg(int);
	int getReal();
	int getImg();
	cComplex operator+(const cComplex &);
	cComplex operator-(const cComplex &);
	cComplex operator++();
	cComplex operator--();
	cComplex operator++(int);
	cComplex operator--(int);
	void display();
	//friend ostream &operator<<(ostream &out,)
};
