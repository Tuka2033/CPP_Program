#include <iostream>
using namespace std;
int main()
{
    int num1 = 10;
    //double num2 = ( double )num1;
    double num2 = static_cast<double>(num1);
    cout << "Num2 : " << num2 << endl;

    double num3 = 10.5;
    //int num2 = ( int )num1; //C-Style
    int num4 = static_cast<int>(num3); //C++ Style
    cout << "Num2 : " << num4 << endl;
    return 0;
}