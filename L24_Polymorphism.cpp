#include <iostream>
using namespace std;

/*
==================== POLYMORPHISM ====================

Polymorphism
│
├── 1. Compile-Time Polymorphism (Static Binding)
│     -> The compiler decides which function to call
│        before the program runs.
│
│     Achieved using:
│     a) Function Overloading
│        - Same function name
│        - Different parameter lists
│
│     b) Operator Overloading
│        - Gives existing operators (+, -, ==, etc.)
│          new behavior for user-defined classes.
│
└── 2. Run-Time Polymorphism (Dynamic Binding)
      -> The function to execute is decided while
         the program is running.
      -> Achieved using Virtual Functions.
      -> Commonly implemented through Function
         Overriding in inheritance.

-------------------------------------------------------
Compile-Time  -> Function Overloading + Operator Overloading
Run-Time      -> Virtual Functions (Function Overriding)
-------------------------------------------------------
*/

class BaseClass{
   public:
   int var_base;

   void display(){
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

   // baseptr->var_derived=345; // This will throw me error 
    return 0;
}





/*

// IMPT Note

Without virtual → look at the pointer type (BaseClass*).
With virtual → look at the object being pointed to (DerivedClass).


Static binding means that the function to be called is decided at compile time based on the declared type of the pointer/reference, 
not the actual object it points to. For example, if a BaseClass* pointer points to a DerivedClass object and calls a non-virtual 
display() function, BaseClass::display() is called because the pointer type is BaseClass*. If the function is declared virtual, 
dynamic binding occurs instead, where the function is selected at runtime based on the actual object type, so DerivedClass::display()
would be called.

*/