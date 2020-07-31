#include<iostream>
using namespace std;
int Searching(int arr[], int size, int key)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return 1;
		}
	}
	return -1;
}
void main()
{
	int n, s;
	int arr[10];
	int key;
	cout << "Enter size\n";
	cin >> n;
	cout << "Enter Array::\n";
	for (int i = 0; i <n; i++)
	{
		cin >> arr[i];
	}
	cout << "\n====================================\n";
	cout << "\nEnter index::";
	cin >> key;
	 
	try
	{
		if (key > n)
		{
			throw 1;
		}
		else
		{
			s = Searching(arr, n, key);
			if (s > 0)
			{
				cout << "\nElement is foud....";
			}
			else
			{
				cout << "\nElement not found...";
			}
		}
	}
	catch (int e)
	{
		cout << "\nArray out of index...........";
	}
	cout << "\n\n\n\n";
}