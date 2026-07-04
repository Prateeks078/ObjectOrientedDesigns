#include<iostream>
using namespace std;


class binary{
    private:
    string s;

    public:
    void readbin();
    void checkbin(); // Declaring a function here
    void ones();
    void display();
};


void binary::readbin(void){
    cout<<"Enter the Binary Number: ";
    cin>>s;
}

void binary::checkbin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='1' && s.at(i)!='0'){
            cout<<"Incorrect Binary Format"<<endl;
            break;
        }
    }
}

void binary:: ones(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1')
        s.at(i)='0';
        else if(s.at(i)=='0')
        s.at(i)='1';
    }
}

void binary::display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i)<<" ";
    }
    cout<<endl;
}

int main(){

    // You can declare the objects along with the classes 
    // For example:
    
    /* class Employee{
            Class Definition        
     }Harry, Lovish,Raj; */


    // Task:
    // Take a Binary number as a string, Check the binary and then make it One's Complement. If Margin, try to fit Nesting of Member Function into  it as well
    
    binary b;
    b.readbin();
    b.display();

    b.checkbin();
    b.ones();

    b.display();

    return 0;
}