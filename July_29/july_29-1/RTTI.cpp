#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<typeinfo>
using namespace std;
class demoRTTI
{
	int a;
	char ch;
	char str[10];
	float b;
public:
	demoRTTI()
	{
		a = 10; ch = 'S';
		strcpy(str, "Tuka");
		b = 10;
	}
	void display()
	{
		cout << "\nType Of A : " << typeid(a).name();
		cout << "\nType Of B : " << typeid(b).name();
		cout << "\nType Of str : " << typeid(str).name();
		cout << "\nType Of char : " << typeid(ch).name();
	}
};
int main()
{
	demoRTTI obj;
	obj.display();
	cout << "\nType Of obj : " << typeid(obj).name();
}
/*Note: 
type_info:
 ->type_info is a class which is declared  in stdnamespace and stdnamespace is declared in typeinfo.h header file.
typeid:
->It is used where the dynamic type or runtime type information of an object is needed.
->It is included in the <typeinfo> library. Hence inorder to use typeid, this library should be included in the program.
}*/