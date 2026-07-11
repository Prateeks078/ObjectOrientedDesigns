#include<iostream>
using namespace std;

// Constructor is a special Member function of a class which is used to initialize the Objects of that class.
// It has the same name as that of the class
// It is automatically Invoke, whenever an object is being created. 
// It does not have any return type

class Complex{
    private:
    int a,b;

    public:

    // Declaring a Default constructor over here 
    Complex(void);

    void display(){
        cout<<"The value of a and b are: "<<a<<" + "<<b<<" i "<<endl;
    }
};


// Comment it out and then check the difference u will notice the difference 
Complex::Complex(void){
    a=100;
    b=10090;

    cout<<"Hello World"<<endl;
}

int main(){
    Complex c1,c2,c3;
    c1.display();
    return 0;
}

// Characteristics of a Constructos:

/*
1. It is always declared inside the public section of a Class.
2. They are automatically invoked whenever an object is being created.
3. They cannot return values and do not have any return types 
4. It can have default arguments.
5. We cannot refer to their addresses
*/