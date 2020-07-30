#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
namespace stu
{
	class cStudent
	{
		int rollNo, len;
		char* name;
		float per;
	public:
		cStudent();
		cStudent(int, const char*, float);
		void Accept();
		void display();
	};
}