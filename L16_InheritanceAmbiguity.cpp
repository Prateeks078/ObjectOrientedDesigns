#include<iostream>
using namespace std;

class Base1{
    public:
    void Greet(){
        cout<<"Amrita is Greeting !!"<<endl;
    }
};

class Base2{
    public:
    void Greet(){
        cout<<"Malika is Greeting !!"<<endl;
    }
};

// class Derived:public Base1, public Base2{
// }; --> Telling us Ambiguity-1

// Solution To Ambiguity-1 
class Derived1:public Base1, public Base2{
    public:
    void Greet(){
        Base1::Greet();
    }
};

class Derived2:public Base1,public Base2{ 
    
    // Ambiguity 2: If I am Having same function in Base Class, Then priority will be given to the Derived Class 
    public:
    void Greet(){
        cout<<"I am greeting myself, Boys"<<endl;
    }
};

int main(){
    Base1 B1;
    B1.Greet();

    Base2 B2;
    B2.Greet();

    Derived1 D1;
    // D1.greet(); --> This is Ambiguity 1 (Derived Class got confused, which Greet() to call on from here !!)

    // After Solution to Amb-1 
    D1.Greet();

// ----------------------------------------------

    Derived2 D2;
    D2.Greet(); // ----> Solution to Ambiguity 2
    return 0;
}