#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"pan.h"
#include"Amount.h"
class Account
{
	int id;
	char name[20];
	float balance;
public:
	Account();
	Account(int, const char*, float);
	void Display();
	void Deposit(int);
	void Withdraw(int);
};

