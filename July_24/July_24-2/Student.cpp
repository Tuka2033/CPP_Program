#include"Student.h"

cStudent::cStudent()
{
	rollNo = 0;
	int len = 0;
	cname = new char[len + 1];
	strcpy(cname, " ");
}
cStudent::cStudent(const char *nm, const char *adr, int rno, const char *cnm):cPerson(nm,adr)
{
	rollNo = rno;
	int len = strlen(cnm);
	cname = new char[len + 1];
	strcpy(cname, cnm);
}
void cStudent::Accept()
{
	int len;
	char cnm[50];
	cout << "\nEnter Student Details::";
	cout << "\nRoll No::";
	cin >> rollNo;
	cout << "\nCollage name::";
	cin >> cnm;
	len = strlen(cnm);
	cname = new char[len + 1];
	strcpy(cname, cnm);
	cPerson::Accept();
}
void cStudent::Display()
{
	cout << "\nStudent Details Are::";
	cout << "\nRoll No::" << rollNo;
	cPerson::Display();
	cout << "\nCollage Name::"<<cname;
	cout << "\n=====================================";
}

cStudent::~cStudent()
{
	delete []cname;
}