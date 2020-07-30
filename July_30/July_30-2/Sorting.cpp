#include<iostream>
using namespace std;
template<class T>
void Sort(T arr[], int size)
{
	T temp ;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
template<class T>
int Searching(T arr[], int size, T key)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return 1;
		}
	}
	return -1;
}
template<class T>
void Accept(T arr[], int size)
{
	for (int i = 0; i <size; i++)
	{
		cin >> arr[i];
	}
}
template<class T>
void Display(T arr[], int size)
{
	cout << "\n Sorted Array::";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ends;
	}
}
void main()
{
	int n,s;
    char arr[10];
	char key;
	cout << "Enter size\n";
	cin >> n;
	cout << "Enter Array::\n";
	Accept<char>(arr, n);
	cout << "\n====================================\n";
	Sort<char>(arr, n);
	Display<char>(arr, n);
	cout << "\n-----------------------------------------------------------------\n";
	 cout << "\nEnter searchinng element::";
	 cin >> key;
	 s = Searching<char>(arr, n, key);
	 if (s > 0)
	 {
		 cout << "\nElement is foud....";
	 }
	 else
	 {
		 cout << "\nElement not found...";
	 }
	 cout << "\n\n\n\n";
}