#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
class cStudent
{
	int rollNo;
	static int cnt;
	char* name;
	cDate doa;
public:
	cStudent();
	  cStudent(const char*, int, int, int);
	  void Accept();
	  void Display();
	  ~cStudent();
};