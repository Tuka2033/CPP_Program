#include"cal.h"
calculator::calculator()
{
}
calculator::calculator(int x,int y)
{
 d=math1::div(x,y);
 m= math1::mul(x,y);
 a= math2::add(x,y);
 s= math2::sub(x,y);
}
void calculator::Display()
{
	cout << "\nDIVISION :" << d;
	cout << "\nMULTIPLICATION:" << m;
	cout << "\nAddition::" << a;
	cout << "\nSUBSTRACTION::" << s;
	
}