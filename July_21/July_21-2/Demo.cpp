#include"Demo.h"
cDemo::cDemo(int &w,int k):p(w),i(k)
{
    //cout << p;
}
void cDemo::Display()
{
    cout << "Constant Member:" << i << endl;
    cout << "Reference Member:" << p << endl;
}