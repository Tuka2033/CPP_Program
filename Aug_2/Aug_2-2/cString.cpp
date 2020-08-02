#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	char str1[10], str2[10], str3[20],str4[10];
	int len;
	cout << "\nEnter a String::";
	cin >> str1;
	len = strlen(str1);
	cout << len << endl;
	strcpy(str2, str1);
	cout << str2 << endl;
	strcpy(str3, str1);
	strcat(str3, " ");
	strcat(str3, str2);
	cout << str3 << endl;
	strcpy(str4,_strrev(str1));
	cout << str4 << endl;
	if (strcmp(str1, str4))
	{
		cout << "\nPalindrome";
	}
	else
		cout << "\nNot Palindrome";
	cout << "\n\n\n";
}