#include"Person.h"
cPerson::cPerson()
{
	strcpy(name, "\0");
	age = 0;
	strcpy(city, "\0");
}
cPerson::cPerson(const char nm[], int a, const char cy[])
{
	strcpy(name, nm);
	age = a;
	strcpy(city, cy);
}
void cPerson::Accept()
{
	cout << "\nEnter Person Details:\n";
	cout << "\nEnter Person name:\n";
	cin >> name;
	cout << "\nEnter Person age:\n";
	cin >> age;
	cout << "\nEnter Person city:\n";
	cin >> city;
}
void cPerson::Display()
{
	cout << "Person Details:\n";
	cout << "Name :" << name << "\n" << "Age :" << age << "\n" << "City :" << city << endl;
	cout << "\n=========================================================================================\n";
}
void cPerson::setName(const char nm[])
{
	strcpy(name, nm);
}
char cPerson::getName()
{
	return name[20];
}
void cPerson::setAge(int a)
{
	age = a;
}
char cPerson::getAge()
{
	return age;
}
void cPerson::setCity(const char cy[])
{
	strcpy(city, cy);
}
char cPerson::getCity()
{
	return city[20];
}