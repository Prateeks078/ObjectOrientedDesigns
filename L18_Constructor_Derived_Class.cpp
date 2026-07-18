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
    int data;

    public:
    Base1(int i){
        i=data;
        cout<<"Base1 Class Constructor is being called.."<<endl;
    }

    void PrintBase1(){
        cout<<"The Value of Data is "<<data<<endl;
    }
};


class Base2{
    protected:
    int data;

    public:
    Base2(int i){
        data=i;
    }

    void PrintBase2(){
        cout<<"The Value of Data is: "<<data<<endl;
    }
};




int main(){

    return 0;
}