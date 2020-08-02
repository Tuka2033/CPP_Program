#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int length(char* s)
{
	int cnt = 0;
	while(*s!='\0')	
	{
		cnt++;
		s++;
	}
	return cnt;
}
void copy(char* s, char* st)
{
	while (*s != '\0')
	{
		*st = *s;
		s++;
		st++;
	}
	*st = '\0';
}
void Reverse(char* s)
{
	char rev[20];
	int k,i,j;
	for (i = 0; s[i] != '\0'; i++);
	rev[i];
	{
		k = i - 1;
	}
	for (j = 0; j <= i - 1; j++)
	{
		rev[j] = s[k];
		k--;
	}
	rev[j] = '\0';
	cout << "\nReverse String is::"<<rev;
	if (strcmp(s, rev))
	{
		cout << "\nGiven String is Palindrome....!";
	}
	else
	{
		cout << "\nGiven String is not Palindrome....!";
	}
}
int main()
{
	int len;
	char str1[10];
	char str2[10];
	char str3[10],str4[20];
	cout << "\nEnter a string::";
	cin >> str1;
	len = length(str1);
	cout << "\nLength of String::" << len;
	copy(str1, str2);
	cout << "\nSecond String is::" << str2;
	Reverse(str2);
	cout << "\nEnter 3rd String::";
	cin >> str3;
	strcpy(str4, str1);
	strcat(str4, " ");
	strcat(str4, str3);
	cout << "\nString After concantation::" << str4;
	cout << "\n\n\n";
}