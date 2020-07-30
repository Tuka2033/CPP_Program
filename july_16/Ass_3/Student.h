//student heaer file
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cStudent
{
	int rollno;
	char name[20];
	float percentage;
public:
	cStudent();
	cStudent(int, const char[], float);
	void accept();
	void display();
	void show_result();
};
