#include"Complex.h"

cComplex::cComplex(double re, double im) :re(re), im(im)
{
	cout << "ctor: ";
	cprint();
}
cComplex::cComplex(const cComplex& c):re(c.re),im(c.im)
{
	cout << "cctor :";
	cprint();
}
cComplex::~cComplex()
{
	cout << "dctor:";
	cprint();
}
cComplex cComplex:: operator=(const cComplex& c)
{
	re = c.re;
	im = c.im;
	cout << "copy";
	cprint();
	return *this;
}
double cComplex::norm()
{
	return sqrt(re * re + im * im);
}
void cComplex::cprint()
{
	cout << "|" << re << "+j" << im << "|" << endl;
}