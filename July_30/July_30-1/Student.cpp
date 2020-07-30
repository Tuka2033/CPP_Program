#include"cStudent2.h"
cStudent::cStudent()
{
	rollNo = 0;
	height = 0;
	weight = 0;
}
cStudent::cStudent(int r, float h, float w)
{
	rollNo = r;
	height = h;
	weight = w;
}
void cStudent::display()
{
	cout << "\nRoll No::" << rollNo;
	cout << "\n Height::" << height;
	cout << "\nWeight::" << weight;
}
void cStudent::Accept()
{
	cout << "\nEnter roll No::";
	cin>>rollNo;
	cout << "\n Enter weight::";
	cin>>height;
	cout << "\nEnter weight::";
	cin>>weight;
}