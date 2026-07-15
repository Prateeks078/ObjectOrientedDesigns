#include<iostream>
using namespace std;

// Multiple Inheritance Concept 

class Base1{
    protected:
    int Base1num;
    
    public:
    void setnum1(int a){
        Base1num=a;
    }
};

class Base2{
    protected:
    int Base2num;

    public:
    void setnum2(int a){
        Base2num=a;
    }
};

class Derived:public Base1,public Base2{
    public:
    void display(){
        cout<<"The Value of Num 1 is: "<<Base1num<<endl;
        cout<<"The Value of Num 2 is: "<<Base2num<<endl;
    }
};

int main(){
    Derived D1;
    // D1.Base1num; ----> U cant access it kuki protected tha publicly inherited ke baad bhi protected hi raha
    D1.setnum1(1001);
    D1.setnum2(1002);
    D1.display();
    return 0;
}