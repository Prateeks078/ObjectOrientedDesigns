#include<iostream>
using namespace std;

class c2; // Forward Declaration

class c1{
    private:
    int d1;
    
    public:
    void setData(int val){
        d1=val;
    }

    friend void BeforeSwap(c1 o1, c2 o2);
    friend void AfterSwap(c1 &obj1, c2 &obj2);
};

class c2{
    private:
    int d2;

    public:
    void setData(int val){
        d2=val;
    }

    friend void BeforeSwap(c1 o1, c2 o2);
    friend void AfterSwap(c1 &obj1, c2 &obj2);
};

void BeforeSwap(c1 o1, c2 o2){
    cout<<"The Values before swap are: "<<o1.d1<<" and "<<o2.d2<<endl;
}

void AfterSwap(c1 &oj1, c2 &oj2){
    int temp;
    temp=oj1.d1;
    oj1.d1=oj2.d2;
    oj2.d2=temp;
    cout<<"The Swapped Values are: "<<oj1.d1<<" and "<<oj2.d2<<endl;
};

int main(){
    c1 oc1;
    c2 oc2;

    oc1.setData(21);
    oc2.setData(13);

    BeforeSwap(oc1,oc2);
    AfterSwap(oc1,oc2);
    
    BeforeSwap(oc1,oc2);

    return 0;
}