//Student main file
#include"Student.h"
void main()
{
	cStudent s1;
	s1.display();
	cStudent s2(1, "Tuka", 49.6);
	s2.display();
	cStudent s3;
	s3.accept();
	s3.display();
}