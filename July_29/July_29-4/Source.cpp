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
    void showRecord(void)
    {
        cout << "Number   : " << this->number << endl;
    }

  
    void display(void)const
    {
        //Test *const ptr = ( Test *const  )this;
        Test* const ptr = const_cast<Test* const>(this);
        ptr->showRecord();
    }
};
int main()
{
    const Test t1;
    t1.display();
    return 0;
}
