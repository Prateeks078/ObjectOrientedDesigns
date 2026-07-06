#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count; // Must be defined outside the class, it tells the compiler that a variable named as count exists but no memory is allocated yet

public:
    void setData(void)
    {
        cout << "Enter the id of the Employee: " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of the Employee is: " << id << " and the count of this Employee is: " << count << endl;
    }

    // Static Method Function: Always Remember, static method can only access static data members no others are allowed here
    static void getCount()
    {
        // cout<<id<<endl; throws error
        cout << "The value of the count is: " << count << endl;
    }
};

int Employee::count = 1000; // It gets initialised to Zero Very Very Very Very Important Line

int main()
{
    Employee e1, e2, e3;
    e1.setData();
    e1.getData();
    // Because static method is always governed by Class not object. Hence
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}