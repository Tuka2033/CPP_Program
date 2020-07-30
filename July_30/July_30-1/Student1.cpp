#include"cStudent.h"
using namespace stu;
cStudent::cStudent()
{
     len = 0;
	rollNo = 0;
	name = new char[len + 1];
	strcpy(name, " ");
	per = 0;
}
cStudent::cStudent(int r, const char *nm, float p)
{
	 rollNo = r;
	 len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
	per = p;
}
void cStudent::display()
{
	cout << "\nName::"<< name;
	cout << "\nRoll no::" << rollNo;
	cout << "\nPercentage::" << per;
}
void cStudent::Accept()
{
	char nm[50]; 
	cout << "\nEnter Name::";
	cin >> nm;
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
	cout << "\nEnter roll no::";
	cin >> rollNo;
	cout << "\nEnter Percentage::";
	cin >> per;
}