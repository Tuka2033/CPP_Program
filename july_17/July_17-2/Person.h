#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cPerson
{
	char name[20];
	int age;
	char city[20];
public:
	cPerson();
	cPerson(const char[], int, const char[]);
	void Accept();
	void Display();
	void setName(const char[]);
	char getName();
	void setAge(int);
	char getAge();
	void setCity( const char[]);
	char getCity();
};
