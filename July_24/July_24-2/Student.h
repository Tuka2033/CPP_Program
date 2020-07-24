#include"Person.h"
class cStudent:cPerson
{
	int rollNo;
	char *cname;
public:
	cStudent();
	cStudent(const char*, const char*, int, const char*);
	void Accept();
	void Display();
	~cStudent();
};
