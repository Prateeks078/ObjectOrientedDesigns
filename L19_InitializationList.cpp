#include<iostream>
using namespace std;

class Test{
    private:
    int a;
    int b;

    public:
    // Writing Up the Constructor and initialising with List 
    
    /*
    Format Will Be:
    Syntax of Initialization List in Constructor

    Constructor(argument list): initialization-section{
        assignment + othet stuff
    }

    */

    // Type 1
    // Test(int i, int j):a(i),b(j)
    // Test(int i, int j):a(i),b(i+1)
    // Test(int i, int j):a(i),b(a+j)
    // Test(int i, int j):b(i),a(i+j)
Test(int i, int j):b(i),a(b+j) // This is a red flag because a is initialized first then b
    {
        cout<<"Constructor is Being Executed: "<<endl;
        cout<<"The Value of a is: "<<a<<endl;
        cout<<"The Value of b is: "<<b<<endl;
    };
};

int main(){
    Test t(9,4);
    return 0;
}