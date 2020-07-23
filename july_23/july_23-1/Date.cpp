#include"Date.h"
cDate::cDate()
{
	date = 1;
	month = 1;
	year = 2020;
}
cDate::cDate(int dd, int mm, int yy)
{
	date = dd;
	month = mm;
	year = yy;
}
void cDate::Accept()
{
	cout << "Enter Date of Admission(dd,mm,yy)::";
	cin >> date >> month >> year;
}
void cDate::Display()
{

	cout << "\nDate of Admission::";
	cout<< date<<"/"<< month<<"/"<<year;
}