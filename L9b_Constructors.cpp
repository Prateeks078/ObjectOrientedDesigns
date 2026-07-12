#include<iostream>
using namespace std;

// Implementing Parameterized Constructors 

class Complex{
    private:
    int a,b;

    public:
    // Writing a Parameterized Constructor
    Complex(int arg1, int arg2){
        a=arg1;
        b=arg2;
    }

    // Function to print the Complex Number 
    void PrintNum(void){
        cout<<"The Complex Number is: "<<a<<" + "<<b<<"i";
    }
};

int main(){
    Complex c1(1,2);
    c1.PrintNum();
    return 0;
}

