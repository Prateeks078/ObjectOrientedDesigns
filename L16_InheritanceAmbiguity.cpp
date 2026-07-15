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

class Derived:public Base1, public Base2{

};

int main(){
    Base1 B1;
    B1.Greet();

    Base2 B2;
    B2.Greet();

    Derived D1;
    // D1.greet(); --> This is Ambiguity 1 (Derived Class got confused, which Greet() to call on from here !!)

    return 0;
}