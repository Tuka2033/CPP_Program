#include"Student.h"
int cStudent::cnt = 0;
cStudent::cStudent()
{
	int len = 0;
	rollNo = cnt;
	name = new char[len + 1];
	strcpy(name," ");
	cnt++;
}
cStudent::cStudent(const char *nm, int d, int m, int y):doa(d,m,y)
{
	int len = strlen(nm);
	rollNo = cnt;
	name = new char[len + 1];
	strcpy(name, nm);
	cnt++;
}
void cStudent::Accept()
{
	cout << "\nStudent Details::\n";
	cout << "Name:";
	cin>> name;
	doa.Accept();
}
void cStudent::Display()
{
	cout << "\nStudent Details::\n";
	cout << "Name:" << name;
	doa.Display();
}
cStudent::~cStudent()
{
	delete name;
}