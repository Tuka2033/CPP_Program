#include"Book.h"
int cBook::bnm = 0;
cBook::cBook()
{
	 strcpy(name," ");
	 Price = 0;
	 bnm++;
	 bookNumber=bnm;
}
cBook::cBook(const char* nm, float pr)
{
	strcpy(name, nm);
	Price = pr;
	bnm++;
	bookNumber=bnm;
}
void cBook::Accept()
{
	cout << "Enter Book Details" << endl;
	cout << "Enter Book name:";
	cin >> name;
	cout << "Enter Price:";
	cin >> Price;
}
void cBook::Display()
{
	cout << "\nBook Details" << endl;
	cout << "Book Number:" << bookNumber<<endl;
	cout << "Book name:"<<name<<endl;
	cout << "Price:"<<Price<<endl;
	cout << "\n===============================================================\n";
}
void cBook::setName(const char* nm)
{
	strcpy(name, nm);
}
void cBook::setPrise(float pr)
{
	Price = pr;
}
char* cBook::getName()
{
	return name;
}
float cBook::getPrise()
{
	return Price;
}