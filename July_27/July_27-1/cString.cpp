#include"cString.h"
cString::cString()
{
	len = 0;
	name = new char[len + 1];
	name[0] = '\0';
}
cString::cString(const char* nm)
{
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
}
cString::cString(const cString& s)
{
	this->len = s.len;
	this->name = new char[this->len + 1];
	strcpy(this->name, s.name);
}
void cString::Accept()
{
	char nm[50];
	cin >> nm;
	len = strlen(nm);
	name = new char[len + 1];
	strcpy(name, nm);
}
void cString::Display()
{
	cout << name;
}
cString::~cString()
{
	delete name;
}