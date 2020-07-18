#include "Complex.h"
int main()
{
    complex c1;
    c1.Display();

    complex c2;
    c2.setReal(10);
    c2.setImg(20);
    c2.Display();

    const complex c3(40, 50);
    c3.Display();
    return 0;
}