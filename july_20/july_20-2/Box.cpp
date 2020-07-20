#include"Box.h"
cBox::cBox()
{
	capacity = 0;
}
cBox::cBox(int ca)
{
	capacity = ca;
}
void cBox::display()
{
	cout << capacity;
}
void cBox::accept()
{
	cout << "Enter a capacity:" << endl;
	cin >> capacity;
}
int cBox::operator >(cBox &obj)
{
	if (this->capacity > obj.capacity)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}