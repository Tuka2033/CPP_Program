#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cString
{
	int len;
	char *str;
public:
	cString()
	{
		len = 0;
		str = new char[len + 1];
		str[0] = '\0';
	}
 	cString(const char *s)
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	cString operator +(cString &s)
	{
		cString temp;
		temp.len = this->len + s.len;
		temp.str = new char[temp.len + 2];
		strcpy(temp.str, this->str);
		strcat(temp.str," ");
		strcat(temp.str, s.str);
		return temp;
	}
 friend void operator < (cString obj,cString obj1)
	{
		int r = _stricmp(obj.str,obj1.str);
		if (r>0)
		{
			cout << obj.str << " is greater" << endl;
		}
		else if (r < 0)
		{
			cout << obj1.str << " is greater" << endl;
		}
		else
		{
			cout << " Both are equal....";
		}
	}
	void operator>(cString &obj)
	{
		int i = strcmp(this->str, obj.str);
		if (i == 1)
			cout << this->str << "  is greater" << endl;
		else if (i == -1)
			cout << obj.str << "  is greater" << endl;
		else
			cout << " Boths are equal" << endl;
	}
	friend cString operator +(const cString &s1,const cString &s)
	{
		cString temp;
		temp.len = s1.len + s.len;
		temp.str = new char[temp.len + 2];
		strcpy(temp.str, s1.str);
		strcat(temp.str, " ");
		strcat(temp.str, s.str);
		return temp;
	}
	void show()const
	{
		cout << str << endl;
	}
	friend ostream& operator <<(ostream &tuka, cString &s)
	{
		tuka << s.str << endl;
		return tuka;
	}
	cString(const cString &s)
	{
		len = s.len;
		str = new char[len + 1];
		strcpy(str, s.str);
	}
	cString operator=(const cString &obj)
	{
		len = obj.len;
		this->str = new char[len + 1];
		strcpy(this->str, obj.str);
		return *this;
	}
	friend istream & operator >> (istream &in, cString &s5)
	{

		char d[10];
		in >> d;
		s5.len = strlen(d);
		s5.str = new char[s5.len + 1];
		strcpy(s5.str, d);
		return in;
	}

};
int main()
{
	cString s1("Tukaram"), s2("Tuka"),s4,s5;
	cString s3 = s1 + s2;
	cout << s3;
	/*s3.show();
	s1.show();*/
	/*cin >> s4>> s5;*/
	s4 = s5 + s3;
	cout<<s4;
	/*s1 > s2;
	s2 < s1;*/
}