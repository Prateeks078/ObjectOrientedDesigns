                                           // Very Very Important 
#include<iostream>
using namespace std;

class Complex; // Forward Declaration

class Calculator{
    private:
    int sum;

    public:
    int addReal(Complex,Complex);
    int addComplex(Complex,Complex);
};

class Complex{
    private:
    int a,b;

    // Statement of Friend declaring 
    // friend int Calculator::addReal(Complex, Complex);
    // friend int Calculator::addComplex(Complex, Complex);

    // Aliter: 
    friend class Calculator; // Ab calculator har function ko access kr skta hai complex class ke 

    public:
    void setnum(int num1,int num2){
        a=num1;
        b=num2;
    }

    void displaynum(){
        cout<<"The Complex Number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};


int Calculator::addReal(Complex o1, Complex o2){
        sum=o1.a+o2.a; // Can't access, Friend Banana padega    
        return sum; 
    }

int Calculator::addComplex(Complex o1, Complex o2){
        sum=o1.b+o2.b; // Can't access, Friend Banana padega    
        return sum; 
    }


int main(){
    Complex c1,c2;
    c1.setnum(1,2);
    c1.displaynum();

    c2.setnum(3,4);
    c2.displaynum();

    Calculator calc1;
    int res;
    res=calc1.addReal(c1,c2);
    cout<<"The sum of the real part of the Complex Number is: "<<res<<endl;

    res=calc1.addComplex(c1,c2);
    cout<<"The sum of the Complex part of the Complex Number is: "<<res<<"i"<<endl;
 
    return 0;
}
