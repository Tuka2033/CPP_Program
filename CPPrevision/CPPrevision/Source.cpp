#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Addition
{
	int x;
public:
	Addition()
	{
		x = 0;
	}
	Addition(int x)
	{
		this->x = x;
	}
	friend Addition operator +(Addition obj1,Addition obj2);
	Addition operator -(const Addition obj)
	{
		Addition temp;
		temp.x = this->x - obj.x;
		return temp;
	}
	Addition operator *(const Addition obj)
	{
		Addition temp;
		temp.x = this->x*obj.x;
		return temp;
	}
	Addition operator /(const Addition obj)
	{
		Addition temp;
			temp.x = this->x / obj.x;
			return temp;
	}
	Addition operator =(const Addition obj)
	{
		this->x = obj.x;
		return *this;
	}
	void show()const
	{
		cout << x<<endl;
	}
	
};
Addition operator +(Addition obj,Addition obj2)
{
	Addition temp;
	temp.x = obj.x + obj2.x;
	return temp;
}
void main()
{
	Addition  a(10),a1(0),a3(20),a5,a4,a6,a2;
	a2 = a + a1+a3;
	a2.show();
	a4 = a * a1 + a3;
	a4.show();
	a5 = a + a1 / a3;
	a5.show();
	a6 = a - a1 + a2;
	a6.show();
}