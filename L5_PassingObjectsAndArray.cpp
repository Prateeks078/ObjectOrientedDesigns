#include <iostream>
using namespace std;

class Employee{
    private:
    int id;
    int salary;

    public:
    void setId(){
        cout<<"Enter the ID of the Employee: "<<endl;
        cin>>id;
    }

    void getId(){
        cout<<"The ID of the Employee is: "<<id<<endl;
    }
};

int main(){
    Employee fb[4]; // Generating an Array of Objects 

    for(int i=0;i<4;i++){
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}