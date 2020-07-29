#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class over
{
	int a, b;
public:
	over()
	{
		a = 0;
		b = 0;
	}
	over(int x, int y)
	{
		a = x;
		b = y;
	}
/*	over operator-()
	{
		this->a = -a;
		this->b = -b;
		return  *this;
	}*/
	friend void operator ++(over &obj)
	{
		obj.a = ++obj.a;
		obj.b = ++obj.b;
	}
	friend void operator ++(over &obj,int)
	{
		obj.a = obj.a++;
		obj.b = obj.b++;
	}
	void show()
	{
		cout << a << "  " << b<<endl;
	}
};
int main()
{
	over o,o1(10,20);
	o1++;
	o1.show();
	o1++;
	o1.show();
}