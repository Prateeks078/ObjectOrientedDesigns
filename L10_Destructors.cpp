#include<iostream>
using namespace std;

int count=0;
// Destructors never takes any arguments nor it return any values 
class Num{
    public:
    Num(){
        count++;
        cout<<"Entering into Constructor of Object Number: "<<count<<endl;
    }

    ~Num(){
        cout<<"Exiting from Destructor of Object Number: "<<count<<endl;
        count--;
    }
};

int main(){
Num n1;
{
    Num n2,n3;
}
return 0;
}