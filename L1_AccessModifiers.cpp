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