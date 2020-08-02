#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	ofstream out("test.txt");
	if (!out)
	{
		cout << "cannot open file...";
		return 1;
	}
	for (int i = 65; i <= 91; i++)
		out.put((char)i);
	out.close();
	ifstream in("MyFile");
	if (!in)
	{
		cout << "cannot open file...";
		return 1;
	}
	while (in)
	{
		in.get(ch);
		if (in)
			cout << ch;
	}
	in.close();
}