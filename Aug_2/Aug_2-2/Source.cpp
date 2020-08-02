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
}
void strConcat(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
}
void chkPalindrome(char* str)
{
	char* START = str;
	char* END = str;
	while (*END != '\0')
	{
		END++;
	}
	END--;
	while (START < END)
	{
		if (*START != *END)
		{
			break;
		}

		START++;
		END--;
	}

	if (START < END)
	{
		cout << "\nSTRING IS NOT PALINDROME";
	}
	else
	{
		cout << "\nSTRING IS PALINDROME";
	}
}

void strCompare(char* src, char* dest)
{
	while ((*src != '\0') && (*dest != '\0'))
	{
		if (*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}

	if ((*src == '\0') && (*dest == '\0'))
	{
		cout << "\nSTRING ARE SAME";
	}
	else
	{
		cout << "\nSTRING ARE NOT SAME";
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

	//length of String
	len = length(str1);
	cout << "\nLength of String::" << len;


	//copy of String
	copy(str1, str2);
	cout << "\nSecond String is::" << str2;

	//compare
	strCompare(str1, str2);
	
	//Reverse
	Reverse(str2);
	cout << "\nEnter 3rd String::";
	cin >> str3;

	//check Palindrome
	chkPalindrome(str3);

	//String Concantation 
	strcpy(str4, str1);
	strcat(str4, " ");
	strcat(str4, str3);
	cout << "\nString After concantation::" << str4;
	cout << "\n\n\n";
}