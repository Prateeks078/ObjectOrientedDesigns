#include<iostream>
using namespace std;

class Complex{
    private:
    int real,imaginary;

    public:
    void setData(int i, int j){
        real=i;
        imaginary=j;
    }

    void getData(){
        cout<<"The Real part is: "<<real<<endl;
        cout<<"The Imaginary part is: "<<imaginary<<endl;
    }
};

int main(){
    // Normal Life 

    // Complex c1;
    // c1.setData(1,2);
    // c1.getData();

    // Mentos Life 
    // Complex c1;
    // Complex *ptr=&c1;
    // (*ptr).setData(1,2);
    // (*ptr).getData();

    // Using Arrow Operator
    Complex c1;
    Complex *ptr=new Complex; // Using New I am creating 
    ptr->setData(1,600);
    ptr->getData();

    return 0;
}