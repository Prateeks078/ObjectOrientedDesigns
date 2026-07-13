#include<iostream>
using namespace std;

class Base{
    private:
    int data1;
    
    public:
    int data2;
    void setData();
    int getData1(void);
    int getData2(void);
};

// Defining all the Above Declare Functions
void Base::setData(){
    data1=190;
    data2=192;
}

int Base::getData1(void){
    return data1;
}

int Base::getData2(void){
    return data2;
}

class Derived:public Base{
    private:
    int data3;

    public:
    int Process(void);
    void Display(void);
};


int Derived::Process(void){
    data3=data2*getData1();
    return data3;
}

void Derived::Display(void){
    cout<<"The Value of Data1 is: "<<getData1()<<endl; // Very Important Lesson; 
    // D1 was Private in Base class, and it was not inherited in derived class but getdata1 was private and i inherited it and fetched data 1 thru it GREAT !!
    cout<<"The Value of Data2 is: "<<data2<<endl;
    cout<<"The Value of Data3 is: "<<data3<<endl;
}

int main(){
    Base B1;
    B1.setData();

    cout<<B1.getData1()<<endl;
    cout<<B1.getData2()<<endl;

    Derived D1;
    D1.setData();
    // D1.data1=909; ---> This will throw Error Because Data1 is private of Base class which can never be inherited hence we cant access directly but iykyk
    // D1.setData(2001,2003);
    D1.Process();
    D1.Display();
    return 0;
}