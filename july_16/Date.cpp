#include"Date.h"
cDate::cDate()
{
	date = 1;
	month = 1;
	year=2000;
}
cDate::cDate(int dd, int mm, int yy)
{
	date = dd;
	month = mm;
	year=yy;
}
void cDate::setDate(int dd)
{
	date = dd;
}
int cDate::getDate()
{
	return date;
}
void cDate::setMonth(int mm)
{
	month = mm;
}
int cDate::getMonth()
{
	return month;
}
void cDate::setYear(int yy)
{
	year = yy;
}
int cDate::getYear()
{
	return year;
}
void cDate::Accept()
{
	cout << "Enter Date(date,month,year): ";
	cin >> date >> month >> year;
	if (month > 12)
	{
		cout << "\nEnter Valid Month......\n\n";
		Accept();
	}
}
void cDate::display()
{
	cout << "Date is:" << date << "/" << month << "/" << year << endl;
}