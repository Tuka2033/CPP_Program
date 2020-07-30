#include<iostream>
using namespace std;
class cDate
{
	int date, month, year;
	public:
		cDate();
		cDate(int, int, int);
		void setDate(int);
		int getDate();
		void setMonth(int);
		int getMonth();
		void setYear(int);
		int getYear();
		void Accept();
		void display();
};
