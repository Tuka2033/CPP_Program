#include"Divexp.h"
cDiv::cDiv()
{
	a = 0; b = 0;
	res = 0;
}
cDiv::cDiv(int x, int y)
{
	a = x;
	b = y;
	try
	{
		if (b == 0)
		{
			throw 0;
		}
		else
		{
			res = a / b;
			Display();
		}
   }
	catch (int e)
	{
		cout << "Division not possible";
	}
}
void cDiv::Display()
{
	cout << "DIVISION OF TWO NO IS::" << res;
}