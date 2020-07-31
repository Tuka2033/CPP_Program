#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T>
class cArray
{
	int size;
	T * arr;
public:
	cArray();
	cArray(int);
	void Accept();
	void Display();
	void Sort();
	void Reverse();
	int Searching(T);
};