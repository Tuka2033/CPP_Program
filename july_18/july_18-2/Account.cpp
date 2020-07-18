#include"Account.h"
int Account::cnt=100;
float Account::interestRate = 10.8;
Account::Account()
{
	AcNo = cnt;
	strcpy(this->name, " ");
	balance = 00;
	cnt++;
}
Account::Account(const char* nm, float bal)
{
	AcNo = cnt;
	strcpy(this->name, nm);
	balance = bal;
	cnt++;
}
int Account::getAcNo()const
{
	return AcNo;
}
void Account::setName(const char* nm)
{
	strcpy(this->name, nm);
}
char* Account::getName()
{
	return name;
}

void Account::setBalance(float bal)
{
	balance = bal;
}
float Account::getBalance()const
{
	return balance;
}
void Account::setinterestRate(float ir)
{
	interestRate = ir;
}
float Account::getinterestRate()const
{
	return interestRate;
}
void Account::display()const
{
	cout << "\n\n***************Account Detail*******************";
	cout << "\n\t Account No :" << AcNo;
	cout << "\n\t Name :" << name;
	cout << "\n\t Balance :" << balance;
	cout << "\n\t Interest Rate :" << interestRate;
}

