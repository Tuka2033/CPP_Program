#include"Address.h"
cAddress::cAddress()
{
	pin = 0;
}
cAddress::cAddress(const char* ar, const char* cy, int p) :area(ar), city(cy)
{
	pin = p;
}
void cAddress::Accept()
{
	cout << "\nEnter Area name::";
	area.Accept();
	cout << "\nEnter city name::";
	city.Accept();
	cout << "\nEnter Area PIN::";
	cin >> pin;

}
void cAddress::Display()
{
	cout << "\nArea name::";
	area.Display();
	cout << "\nCity name::";
	city.Display();
	cout << "\nArea PIN::" << pin;
}