#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Employee
{

    char name[20];

public:
    Employee()
    {

    }
    Employee(char* nm)
    {
        strcpy(name, nm);
    }
    void display()
    {
        cout << "\n********** Emp is  ************\n";
        cout << "\nName::" << name;
    }
    virtual void Fun()
    {
        cout << "\nFun In Employee Class ";
    }
};
class DataBAseAdmin :public Employee
{
public:
    void CreateDataBase()
    {
        cout << "\nDataBase";
    }
   virtual void Fun()
    {
        cout << "\nFun In DataBAseAdministrator";
    }

};
class Programmer :public Employee
{
public:
    void Codding()
    {
        cout << "\nDoing Coding";

    }
    void Fun()
    {
        cout << "\nFun In Programmer";
    }
};
class SystemAdministrator :public Employee
{
public:
    void  SystemUpdate()
    {
        cout << "\nUpdating System";
    }
    void Fun()
    {
        cout << "\n Fun In SystemAdministrator";
    }
};

void Check(Employee* a[], int size)
{
    for (int i = 0; i < size; i++)
    {

        if (typeid(*a[i]) == typeid(Programmer))
        {
            dynamic_cast<Programmer*>(a[i])->Codding();
            a[i]->Fun();
        }
        else if (typeid(*a[i]) == typeid(DataBAseAdmin))
        {
            dynamic_cast<DataBAseAdmin*>(a[i])->CreateDataBase();
            a[i]->Fun();
        }
        else if (typeid(*a[i]) == typeid(SystemAdministrator))
        {
            dynamic_cast<SystemAdministrator*>(a[i])->SystemUpdate();
            a[i]->Fun();
        }
           
    }

}
int main() 
{

    Employee* emp[5];

    emp[0] = new Employee();
    emp[1] = new Programmer();
    emp[2] = new DataBAseAdmin();
    emp[3] = new SystemAdministrator();
    emp[4] = new Programmer();

    Check(emp, 5);
    cout << "\n\n\n";
    return 0;
}