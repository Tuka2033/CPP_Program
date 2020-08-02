

#include<iostream>
using namespace std;
#include"exp1.h"
#include"exp2.h"

class Stack
{
	int* arr;
	int top, size;
public:
	Stack();
	Stack(int);
	void Push();
	void Pop();
	void Display();
};

