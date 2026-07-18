#include<iostream>
using namespace std;

/*
Order of Execution of Constructors:

Case 1: 
Class B:public A{
    // Order of Execution of Constructor
    First A()---> Then B()
};

Case 2:
Class C:public B, public A{
    // Order of Execution of Constructor
    First B()---> Then A() ---> Then C() {Based on B and A, which was made first; Execution Happens}
};

Case 3:
Class C:public B, public virtual A{
    // Order of Execution of Contructor
    First A()---> Then B() ----> Then C()
}

*/

class Base1{
    protected:
    int data1;

    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 Class Constructor is being called.."<<endl;
    }

    void PrintBase1(){
        cout<<"The Value of Data is "<<data1<<endl;
    }
};


class Base2{
    protected:
    int data2;

    public:
    Base2(int i){
        data2=i;
        cout<<"Base2 Class Constructor is being called.."<<endl;
    }

    void PrintBase2(){
        cout<<"The Value of Data is: "<<data2<<endl;
    }
};

class Derived:public Base1,public virtual Base2{
    protected:
    int derived1;
    int derived2;

    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derived1=c;
        derived2=d;

        cout<<"The Derived Constructor is being called.. "<<endl;
    }
    
    void PrintDerived(){
        cout<<"The value of Data is: "<<derived1<<endl;
        cout<<"The value of Data is: "<<derived2<<endl;
    }
};

int main(){
    Derived D1(11,12,13,14);
    D1.PrintDerived();
    return 0;
}