#include"cStrring.h"
int main()
{
	cString s1("Tukaram"), s2("Pandhare"), s4;
	cString s3 = s1 + s2;
	cout << s3;
	s3.show();
	s1.show();
	s4 = s2;
	cout << s4;
}