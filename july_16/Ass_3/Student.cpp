//Student .cpp file
#include"Student.h"
cStudent::cStudent()                   /*Default Constructor*/
{
	rollno = 0;
	strcpy(name, "\0");
	percentage = 0.0;
}
cStudent::cStudent(int rn, const char nm[], float pr)            /*Parameterized Constructor*/
{
	rollno = rn;
	strcpy(name, nm);
	percentage = pr;
}
void cStudent::accept()               /*Accept Maethod*/
{
	cout << "Enter Student Details:\n";
	cout << "\tEnter Roll No.\t\t:";
	cin >> rollno;
	cout << "\n\tEnter Name\t\t:";
	cin >> name;
	cout << "\n\tEnter Percentage\t:";
	cin >> percentage;
}
void cStudent::display()              /*Display Method*/
{
	cout << "Student Details:\n";
	cout << "\tName\t\t:" << name << endl;
	cout << "\tRoll No.\t:" << rollno << endl;
	cout << "\tPercentage \t:" << percentage << endl;
	show_result();
	cout << "==================================================================\n";
}
void cStudent::show_result()               /*Show Result*/
{
	cout << "\tResult\t\t:";
	if (35 < percentage && percentage < 50)
		cout << " PASS" << endl;
	else if (50 < percentage && percentage < 60)
		cout << " SECOND DIVISION " << endl;
	else if (60 < percentage && percentage < 75)
		cout << " FIRST DIVISION" << endl;
	else if (percentage > 75)
		cout << " DISTINCTION" << endl;
	else
		cout << " FAILED" << endl;
}