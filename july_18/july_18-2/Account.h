#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Account
{
private:
	static int cnt;
	int AcNo;
	char name[10];
	float balance;
	static float interestRate;
public:
	//constructor
	Account();
	Account(const char*, float);

	//setter
	void setName(const char*);
	void setBalance(float);
	void setinterestRate(float);
	//getter
	int getAcNo()const;
	char* getName();
	float getBalance()const;
	float getinterestRate()const;

	void display()const;
};
