#include "Complex.h"
int complex::cnt = 0;
complex::complex(int r, int i)
{
    real = r;
    img = i;
    cnt++;
}
complex::complex()
{
    this->real = this->img = 0;
    cnt++;
}
void complex::setReal(int real)
{
    this->real = real;
}
int complex::getReal()const
{
    return this->real;
}
void complex::setImg(int img)
{
    this->img = img;
}
int complex::getImg()const
{
    return this->img;
}
void complex::Display()const
{
    cout << "Complex No.:: " << real <<"+"<< img <<"i" << endl;
    cout << "Number of Object Created ::" << cnt << endl;
}