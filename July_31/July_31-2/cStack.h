#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template <class T>
class stack
{
	int size;
	T* arr;
	int top;
public:
	stack();
	void push(T);
	T pop();
	void display();
};
