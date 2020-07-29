#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
public:
	complex()
	{
		real = 0;
		img = 0;
	}
	complex(int a, int b)
	{
		this->real = a;
		this->img = b;
	}
	complex operator -(complex obj)
	{
		complex temp;
		temp.real = this->real - obj.real;
		temp.img = this->img - obj.img;
		return temp;
	}
	complex operator =(complex obj)
	{
		this->real = obj.real;
		this->img = obj.img;
		return *this;
	}
	void display()const
	{
		cout << real << "+" << img << "j" << endl;
	}
	friend complex operator +(complex , complex);
	
};
int main()
{
	complex c(10, 20), c2(5, 10),c3;
    c3 = c + c2;
	c3.display();
	complex c4 = c - c2;
	c4.display();
}
complex operator +(complex obj1, complex obj)
{
	complex temp;
	temp.real = obj1.real + obj.real;
	temp.img = obj1.img + obj.img;
	return temp;
}
