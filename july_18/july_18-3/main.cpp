#include"Book.h"
int max(float* temp)
{
	float max = temp[0], c = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max < temp[i])
		{
			max = temp[i];
			c = i;
		}
	}
	return c;
}
void main()
{
	cBook bk1;
	bk1.Display();
	cBook bk("cpp",200);
	bk.Display();
	cBook book;
	book.Accept();
	book.Display();
	bk.setPrise(500);
	bk.Display();
	book.setName("java");
	book.Display();
	cBook b[4];
	float temp[4];
	for (int i = 0; i < 4; i++)
	{
		b[i].Accept();
	}
	for (int i = 0; i < 4; i++)
	{
		temp[i] = b[i].getPrice();
	}
	int res = max(temp);
	b[res].Display();
}