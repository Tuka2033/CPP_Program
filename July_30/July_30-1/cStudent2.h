#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef STU_
#define STU_
class cStudent
{
	int rollNo;
	float weight, height;
	public:
		cStudent();
		cStudent(int, float, float);
		void Accept();
		void display();
};
#endif 

