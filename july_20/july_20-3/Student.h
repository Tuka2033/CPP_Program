#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cStudent
{
	int noSubject;
	int* marks;
public:
	cStudent();
	cStudent(int);
	void accept();
	void display();
};