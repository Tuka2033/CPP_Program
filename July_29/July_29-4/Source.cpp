#include <iostream>
using namespace std;
class Test
{
private:
    int number;
public:
    //Test *const this;
    Test(void) : number(20) {}
    //Test *const this;
    void showRecord()
    {
        cout << "Number   : " << this->number << endl;
    }
    void set(int i)
    {
        number = i;
    }
  
    //void display(void)const
    //{
    //    //Test *const ptr = ( Test *const  )this;
    //    Test* const ptr = const_cast<Test* const>(this);
    //    ptr->showRecord();
    //} 
};
int main()
{
    const Test t1;
   const_cast<Test&>(t1).set(10);
   const_cast<Test&>(t1).showRecord();
    return 0;
}
