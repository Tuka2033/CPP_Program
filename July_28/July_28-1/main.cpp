#include"Rectangle.h"
int main()
{
	cShape* s;
	s = new cShape();
	s->calculateArea();
	s = new cReactangle(10,20);
	s->calculateArea();
}
//#include"Square.h"
//int main()
//{
//	cShape* s;
//	s = new cShape();
//	s->calculateArea();
//	s = new cSquare(10);
//	s->calculateArea();
//}