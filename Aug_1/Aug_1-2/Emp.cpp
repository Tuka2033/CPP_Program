
#include "Emp.h"

void cEmployee::accept()
{
	cout << "Id No  ::  ";
	cin >> empno;
	cout << endl << "Name ::  ";
	cin >> empname;
	cout << endl << "Salary ::  ";
	cin >> sal;
}
void cEmployee::display()
{
	cout << "Id No       :: " << empno << endl;
	cout << "Name        :: " << empname << endl;
	cout << "Salary      :: " << sal << endl;
}