#include<iostream>
using namespace std;

class Animal{
    private:
    int a,b,c;

    public:
    int d,e;

    void setData(int a1,int b1,int c1); // Declaring the Function
    void getData(){
        cout<<"The Value of a is: "<<a<<endl;
        cout<<"The Value of b is: "<<b<<endl;
        cout<<"The Value of c is: "<<c<<endl;
        cout<<"The Value of d is: "<<d<<endl;
        cout<<"The Value of e is: "<<e<<endl;
    }
};

void Animal::setData(int a1,int b1,int c1){ // Defining the Function 
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    cout<<"Access Modifiers in C++"<<endl;

    Animal a1;
    a1.setData(1,2,3);
    a1.d=234;
    a1.e=999;
    a1.getData();
    return 0;
}


// Knowledge:

// ==========================================
// Stack vs Heap Allocation
// ==========================================

// Stack Allocation
// Animal a1;

// Access members using:
// a1.getData();
// Use '.' with objects.

// Heap Allocation
// Animal* ptr = new Animal();

// Access members using:
// ptr->getData();
// Use '->' with pointers.


// ==========================================
// Why This Gives Error
// ==========================================

// Animal a = new Animal();

// Reason:
// new Animal() returns a pointer (address).
// Animal a expects an actual object.

// Correct:
// Animal* a = new Animal();

// OR
// Animal a;


// ==========================================
// Difference Between '.' and '->'
// ==========================================

// Object:

// Animal a1;
// a1.getData();

// Pointer:
// Animal* ptr = new Animal();
// ptr->getData();

// Equivalent form:
// (*ptr).getData();
// '->' is shorthand for (*ptr).


// ==========================================
// Relation to C#
// ==========================================

// C++
// Animal a1;

// C#
// Animal a1 = new Animal();

// In C#, class objects are reference types
// and are typically created using 'new'.