#include "Emp.h"
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	cEmployee E1, E2;
	char p;
	ofstream out("Emp.dat", ios::app | ios::binary);
	if (!out)
	{
		cout << "cannot open file...";
		return 1;
	}
	do
	{
		E1.accept();
		out.write((char*)&E1, sizeof(cEmployee));
		cout << "More Data (y/n) ?";
		cin >> p;
	} while (p == 'y' || p == 'Y');
	out.close();
	ifstream in("Emp.dat", ios::in | ios::binary);
	if (!in)
	{
		cout << "cannot open file...";
		return 1;
	}
	in.read((char*)&E2, sizeof(cEmployee));
	while (!in.eof())
	{
		E2.display();
		in.read((char*)&E2, sizeof(cEmployee));
	}
	in.close();
	return 0;
}