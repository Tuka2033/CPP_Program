#include"Box.h"
int main()
{
	cBox b(10);
	cBox b1(20);
	int i = b > b1;
	if (i > 0)
	{
		cout << "Box 1 is greater and capacity is:";
		b.display();
	}
	else
	{
		cout << "Box 2 is greater and capacity is:";
		b1.display();
	}
}