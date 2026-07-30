#include <iostream>
using namespace std;

class BaseClass{
   public:
   int var_base;

   virtual void display(){ // Marking it as virtual -- Dynamic Binding (Run time polymorphism)
      cout<<"Displaying Base Class Variable: "<<var_base<<endl;
   }
};

class DerivedClass:public BaseClass{
   public:
   int var_derived;

   void display(){
      cout<<"Displaying Base Class Variable: "<<var_base<<endl;
      cout<<"Displaying Derived Class Variable: "<<var_derived<<endl;
   }
};

int main(){
   BaseClass *baseptr;
   BaseClass B1;

   DerivedClass D1;
   baseptr=&D1; // Pointing base class ptr to derived class object

   baseptr->var_base=9090;
   baseptr->display();

//    baseptr->var_derived=345; // This will throw me error still because  you did apply virtual, but virtual only affects functions, not variables.
    return 0;
}
