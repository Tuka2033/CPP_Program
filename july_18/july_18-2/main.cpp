#include"Account.h"
int main()
{
	Account a1;
	a1.display();
	Account a2("Tuka", 100);
	a2.display();

	Account a3;
	a3.setName("seeta");
	a3.setBalance(200);
	a3.setinterestRate(11);
	a3.display();

	a3.getAcNo();
	a3.getName();
	a3.getBalance();
	a3.getinterestRate();
	a3.display();
	cout << "\n\n";
	return 0;

}
