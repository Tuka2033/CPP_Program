#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <class T>
void Swap1(T a, T b)
{
	T temp;
	cout << "\n\tOriginal :" << a << "\t" << b;

	temp = a;
	a = b;
	b = temp;

	cout << "\n\tChanged  :" << a << "\t" << b << "\n\n";

}
template <class T>
void Swap2(T a, T i1, T b, T i2)
{
	T temp1, temp2, temp3, temp4;
	cout << "\n\tOriginal :" << a << "+" << i1 << "i\t" << b << "+" << i2 << "i\t";

	temp1 = a;
	temp2 = i1;
	temp3 = b;
	temp4 = i2;

	a = temp3;
	i1 = temp4;
	b = temp1;
	i2 = temp2;

	cout << "\n\tOriginal :" << a << "+" << i1 << "i\t" << b << "+" << i2 << "i\t\n\n";
}

int main()
{
	int i = 10, j = 20;
	float x = 5.55f, y = 15.55f;
	double l = 12.22, k = 24.44;
	Swap1(i, j);
	Swap1(x, y);
	Swap1(l, k);
	Swap2(10, 20, 30, 40);
	return 0;
}