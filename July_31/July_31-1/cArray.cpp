#include"cArray.h"
template<class T>
cArray<T>::cArray()
{
	size = 0;
	arr = new T[size];
}
template<class T>
cArray<T>::cArray(int sz)
{
	size = sz;
	arr = new T[size];
}
template<class T>
void  cArray<T>::Accept()
{
	cout << "\nEnter " << size << ends << typeid(arr[0]).name() << " Array element\n";
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
}
template<class T>
void  cArray<T>::Display()
{
	cout << "\nArry of " << typeid(arr[0]).name() << " element::  ";
	for (int i = 0; i < size; i++)
	{
	  cout<<arr[i]<<ends;
	}
}
template<class T>
void cArray<T>::Sort()
{
	T temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
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
void cArray<T>::Reverse()
{
	for (int i = 0, j = size - 1; i <j; i++, j--)
	{
		swap(arr[i], arr[j]);
	}
}
template<class T>
int  cArray<T>::Searching(T key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			cout << "\nElement is foud....";
			return 0;
		}
	}
	cout << "\nElement not found...";
	return 0;
}
