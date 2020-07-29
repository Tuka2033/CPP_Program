#include<iostream>
using namespace std;
class xyz
{
	int y,x;
	const int &b = 5;
public:
	xyz()
	{
		y = 10;
		x = 90;
		const int &c = (x + y);
		cout << c << endl;
	}
	void disp()
	{
		cout << b<<endl;
	}
};
int main()
{
	xyz z;
	z.disp();
}