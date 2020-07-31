#include"cArray.cpp"
int main()
{
	int key;
	cArray<int> a(5);
	a.Accept();
	a.Display();
	a.Reverse();
	a.Display();
	a.Sort();
	a.Display();
	cout << "\n Enter searching element::";
	cin >>key;
	a.Searching(key);
}