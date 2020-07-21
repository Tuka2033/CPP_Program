#include"Demo.h"
cDemo::cDemo(int k):i(k),p(i)
{
    //cout << p;
}
void cDemo::Display()
{
    cout << "Constant Member:" << i << endl;
    cout << "Reference Member:" << p << endl;
}