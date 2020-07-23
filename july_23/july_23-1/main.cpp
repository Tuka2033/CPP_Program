#include"Student.h"
int main()
{
	int no;
	cStudent s("Tuka", 2, 3, 2020);
	s.Display();
	cStudent *s1;
	cout << "\nEnter No Student:";
	cin >> no;
	s1 = new cStudent[no]; 
	for (int i = 0; i < no; i++)
	{
		s1[i].Accept();
	}
	for (int i = 0; i < no; i++)
	{
		s1[i].Display();
	}
}