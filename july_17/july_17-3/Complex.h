#include<iostream>
using namespace std;
class cComplex
{
	int real,img;
	static int cnt;
public:
	cComplex();
	cComplex(int,int);
	void Accept();
	void Display();
	void showCount();
	void setReal(int);
	int  getReal();
	void setImg(int);
	int getImg();
};
