#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	const int x,y;
public:
	demo():x(23),y(22)
	{

	}
		void display()const
	{
			//x = 10;
		cout<< x << y;
	}
};
int main()
{
  demo d;
	d.display();
_getch();
}