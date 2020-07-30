#include<iostream>
using namespace std;
#define PI 3.14
namespace shape
{
	namespace circule
	{
		class Circule
		{
			int r;
		public:
			Circule()
			{
				r = 0;
			}
			Circule(int a)
			{
				r = a;
			}
			void calculatecircum()
			{
				cout << "\nCircumference of circle::" << 2 * r * PI;
			}
			void calArea()
			{
				cout << "\nArea of circle::" << PI * r * r;
			}
		};
	}
	namespace Rectangle
	{
		class rectangle
		{
			int width,length;
		public:
			rectangle()
			{
				width = 0;
				length=0;
			}
			rectangle(int w,int l)
			{
				width = w;
				length = l;
			}
			void calculateperi()
			{
				cout << "\nPerimeter of rectangle::" <<(width*length);
			}
			void calArea()
			{
				cout << "\nArea of rectangle::" << 2*(width+length);
			}
		};
	}
}
int main()
{
	shape::circule::Circule c1(10);
	c1.calculatecircum();
	c1.calArea();
	shape::Rectangle::rectangle r1(10, 5);
	r1.calculateperi();
	r1.calArea();
}