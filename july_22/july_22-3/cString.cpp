#include"cStrring.h"
cString::cString()
{
	len = 0;
	str = new char[len + 1];
	str[0] = '\0';
}
cString::cString(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
}
cString cString::operator +(cString& s)
{
	cString temp;
	temp.len = this->len + s.len;
	temp.str = new char[temp.len + 2];
	strcpy(temp.str, this->str);
	strcat(temp.str, " ");
	strcat(temp.str, s.str);
	return temp;
}
void cString::show()const
{
	cout << str << endl;
}
ostream& operator <<(ostream& tuka, cString& s)
{
	tuka << s.str << endl;
	return tuka;
}
cString::cString(const cString& s)
{
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
}
cString cString:: operator=(const cString& obj)
{
	len = obj.len;
	this->str = new char[len + 1];
	strcpy(this->str, obj.str);
	return *this;
}