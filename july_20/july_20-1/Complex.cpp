#include"Complex.h"
cComplex::cComplex()
{
	real = 0;
	img = 0;
}
cComplex::cComplex(int rl, int im)
{
	real = rl;
	img = im;
}
void cComplex:: setReal(int rl)
{
	real = rl;
}
void cComplex::setImg(int im)
{
	img = im;
}
int cComplex::getReal()
{
	return real;
}
int cComplex::getImg()
{
	return img;
}
cComplex cComplex::operator+(const cComplex& obj)
{
	cComplex temp;
	temp.real = this->real + obj.real;
	temp.img = this->img + obj.img;
	return temp;
}
cComplex cComplex:: operator-(const cComplex& obj)
{
	cComplex temp;
	temp.real = this->real - obj.real;
	temp.img = this->img - obj.img;
	return temp;
}
cComplex cComplex:: operator++()
{
	this->real = ++real;
	this->img = ++img;
	return *this;
}
cComplex cComplex:: operator--()
{
	this->real = --real;
	this->img = --img;
	return *this;
}
cComplex cComplex:: operator++(int)
{
	this->real = this->real++;
	this->img = this->img++;
	return *this;
}
cComplex cComplex:: operator--(int)
{
	this->real= this->real--;
	this->img= this->img--;
	return *this;
}
void cComplex::display()
{
	cout << real << "+" << img<<"i"<<endl;
}