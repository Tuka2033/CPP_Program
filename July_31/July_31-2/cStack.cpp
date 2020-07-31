#include"cStack.h"
template<class T>
stack<T>::stack()
{
	cout << "Enter a size" << endl;
	cin >> size;
	arr = new T[size];
	top = -1;
}
template<class T>
void stack<T>::push(T a)
{
	if (top == size - 1)
	{
		cout << "\n-------------->stack is full" << endl;
	}
	else
	{
		top++;
		arr[top] = a;
	}
}
template<class T>
T stack<T>::pop()
{
	T ele;
	if (top == -1)
	{
		cout << "------------->Stack is empty\n" << endl;
		return ele;
	}
	else
	{
		ele = arr[top--];
		return ele;
	}
}
template<class T>
void stack<T>::display()
{
	for (int i = top; i >= 0; i--)
	{
		arr[i].display_e();
		cout<< endl;
	}
}