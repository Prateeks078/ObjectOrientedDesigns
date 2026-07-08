#include<iostream>
using namespace std;


// Passing objects in class conecpts:

class Complex{
    private:
    int a;
    int b;

    public:
    void setrealnum(){
        cout<<"Enter the Real Number: "<<endl;
        cin>>a;
    }

    void setcomplexnum(){
        cout<<"Enter the Complex Number: "<<endl;
        cin>>b;
    }

    // void setnumbysum(Complex obj1, Complex obj2){
    //     a=obj1.
    // }

    void displaynum(){
        cout<<"Complete Numer is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    Complex c1,c2,c3;
    
    c1.setrealnum();
    c1.setcomplexnum();
    c1.displaynum();

    c2.setrealnum();
    c2.setcomplexnum();
    c2.displaynum();

    
    return 0;
}