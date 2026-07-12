#include<iostream>
using namespace std;

class Employee{
    private:
    
    public:
    int id;
    float salary;
    // Writing a Parameterized Constructor 
    Employee(int inpId){
        id=inpId;
        salary=900;
    }

    void Address(void){
        cout<<"Hey I am from Employee class and thi is my address"<<endl;
    }

    // Very Very Important Thing to be noted here 
    /*
        A Car cannot exist without first creating its Engine. 
        If the Engine can only be created using Engine(hp), 
        then the Car constructor must call Engine(hp) first. 
        Otherwise, the compiler doesn't know how to build the engine, so it gives an error.
    */

    // Hence writing default constructor for Employee class because when L-33 goes to Compiler, it gets confused and finds 
    // It finds Employee default constructor but unfortunately we do not have that hence it is an impt concept to be noted bro 
    Employee(){};
};

//  Derived From Employee Class 
class Programmer:public Employee{ // Test with different visibility Modes 
    private:

    public:
    int languageid;
    Programmer(int inpId){
        id=inpId; // Agr Base Class m id private m hota toh it would have become inaccessible
        languageid=909;
    }
    // void getData(void){
    //     cout<<id<<endl;
    // }
};

/*

Note fact:
1. Default Visibility Mode is Private.
2. Public Visibility Mode: Public Members of the Base class becomes Public Members of the Derived Class 
3. Private Visibility Mode: Public Members of the Base class becomes Private Members of the Derived Class 
4. Private Members of the Class are never and can't be inherited 

*/

int main(){
    Employee Prateek(101), Ashutosh(102);
    cout<<Prateek.salary<<endl;
    cout<<Ashutosh.salary<<endl;

    Programmer P1(109);
    cout<<P1.languageid<<endl;
    cout<<P1.id<<endl;
    P1.Address();
    return 0;
}