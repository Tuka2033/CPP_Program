#include"Complex.h"
int cComplex::cnt = 0;
cComplex::cComplex()
{
	real = 0;
	img = 0;
	cnt++;
}
cComplex::cComplex(int rl, int im)
{
	real = rl;
	img = im;
	cnt++;
}
void cComplex::Accept()
{
	cout << "\nEnter Real number:";
	cin >> real;
	cout << "\nEnter Img number:";
	cin >>img;
}
void cComplex::Display()
{
	cout << real << "+" << img << "i" << endl;
}
void cComplex::showCount()
{
	cout <<"Number of object:: "<<cnt<<endl;
}
void cComplex::setReal(int rl)
{
	real = rl;
}
int cComplex::getReal()
{
	return real;
}
void cComplex::setImg(int ig)
{
	img = ig;
}
int cComplex::getImg()
{
	return img;
}