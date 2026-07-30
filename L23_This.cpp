// ------------------- NUCLEAR IMPT CONCEPT (VVVVVVV Important) ---------------


#include<iostream>
using namespace std;

//  This Point krta hai uss object ko jisne member function ko call kiya 

class A{
    private:
    int a;

    public:
    // void setData(int a){
    //     this->a=a;
    // }
    
    // Aliter: We can return *this also na
    A& setData(int a){
        this->a=a;
        return *this;
    }

    void getData(void){
        cout<<"The Value of a is: "<<a<<endl;
    }
};

int main(){
    A a;
    a.setData(999).getData();
    // a.getData();
    return 0;
}