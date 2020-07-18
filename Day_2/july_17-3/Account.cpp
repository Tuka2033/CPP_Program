#include"Account.h"
Account::Account()
{
	strcpy(name, " ");
	balance = 0;
	accNo = 0;
}
Account::Account(int ac, const char nm[], float bl)
{
	strcpy(name, nm);
	balance = bl;
	accNo = ac;
}
void Account::Display()
{
	cout << "\nCustomer Details:\n";
	cout << "Account holder name:: " << name << endl;
	cout << "Account number:: " << accNo << endl;
	cout << "Account Balance:: " << balance << endl;
	cout << "\n==========================================================================";
}
void Account::setBalance(float bl)
{
	balance = bl;
}
float Account::getBalance()
{
	return balance;
}