#include"Student.h"
cStudent::cStudent()
{
	noSubject = 0;
	marks = new int;
}
cStudent::cStudent(int sub)
{
	noSubject = sub;
	marks = new int[noSubject];
}
void cStudent::accept()
{
	cout << "Enter the " << noSubject << " Subject Marks::";
	for (int i = 0; i < noSubject; i++)
	{
		cin >> marks[i];
	}
	cout << endl;
}
void cStudent::display()
{
	cout << noSubject << "  Subjects Marks::";
	for (int i = 0; i < noSubject; i++)
	{
		cout<< marks[i]<<ends;
	}
	cout << endl;
}