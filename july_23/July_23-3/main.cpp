#include"Employee.h"
int main()
{
	int no;
	cEmployee e1;
	e1.Display();
	cEmployee e2("Tuka",2,3,2020,2000);
	e2.Display();
	cEmployee *e3;
	cout << "\nEnter No of employee::";
	cin >> no;
	e3 = new cEmployee[no];
	for (int i = 0; i < no; i++)
	{
		e3[i].Accept();
	}
	for (int i = 0; i < no; i++)
	{
		e3[i].Display();
	}
	delete[]e3;
}