#include"Employee.h"
cEmployee::cEmployee()
{
	eId = 0;
	salary = 0;
}
cEmployee::cEmployee(const char* nm, const char* adr, int id, float sal):cPerson(nm,adr)
{
	eId = id;
	salary = sal;
}
void cEmployee::Accept()
{
	cout << "\nEnter employee id:";
	cin >> eId;
	cPerson::Accept();
	cout << "\nEnter your salary:";
	cin >> salary;
}
void cEmployee::Display()
{
	cout << "\nEmployee Details::";
	cout << "\nId:";
	cout << eId;
	cPerson::Display();
	cout << "\nSalary:";
	cout<<salary;
	cout << "\n=========================================\n";

}