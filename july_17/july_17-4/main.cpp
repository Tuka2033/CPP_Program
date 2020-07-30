#include"Account.h"
void main()
{
	Account a1;
	a1.Display();
	Account a2(129234,"Tuka",1000000000000);
	a2.Display();
	a1.setBalance(200);
	a1.Display();
}