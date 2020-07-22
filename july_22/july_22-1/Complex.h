#include<iostream>
using namespace std;
class cComplex
{
	double re, im;
public:
	cComplex(double, double);
	cComplex(const cComplex&);
	cComplex operator=(const cComplex&);
	void cprint();
	~cComplex();
	double norm();
};
