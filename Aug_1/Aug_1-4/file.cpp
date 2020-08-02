#include"Book.h"
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	cBooks B1, B2;
	char p;
	ofstream out("Book.dat", ios::app | ios::binary);
	if (!out)
	{
		cout << "cannot open file...";
		return 1;
	}
	do
	{
		B1.accept();

		out.write((char*)&B1, sizeof(cBooks));

		cout << "More Data (y/n) ?";
		cin >> p;
		B2.display();
	} while (p == 'y' || p == 'Y');
	out.close();

	ofstream out1("Books1.dat", ios::app | ios::binary);
	ifstream in("Book.dat", ios::in | ios::binary);
	if (!in)
	{
		cout << "cannot open file...";
		return 1;
	}
	in.read((char*)&B2, sizeof(cBooks));
	B2.display();
	while (!in.eof())
	{
		out1.write((char*)&B2, sizeof(cBooks));
		in.read((char*)&B2, sizeof(cBooks));
	}
	in.close();
	out1.close();

	ifstream in11("Books1.dat", ios::in | ios::binary);
	while (!in11.eof())
	{
		in11.read((char*)&B2, sizeof(cBooks));
		B2.display();
	}
	in11.close();
	return 0;
}