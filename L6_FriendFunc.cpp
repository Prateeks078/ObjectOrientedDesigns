#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;
    friend Complex sumcomplex(Complex o1, Complex o2); // Written Letter of Intent by Complex Class,// Complex class grants friendship (special access) to this function.

    public:
    void setnum(int num1,int num2){
        a=num1;
        b=num2;
    }

    void displaynum(){
        cout<<"The Complex numer is: "<<a<<"+"<<b<<"i"<<endl;
    }
};


// Returns Complex object that's why written Complex sumcomplex

// ------------------------- IMPT PIECE TO UNDERSTAND FRIEND FUNCTION ------------------

Complex sumcomplex(Complex o1,Complex o2){ 
    Complex temp;
    // cout<<a -- Will give error  [6th Point]
    temp.setnum((o1.a+o2.a),(o1.b+o2.b)); // Outside Global Function can't access Private Property of Complex Class, 
    // For it to access pvt members, Our Complex Class need to make a written statement that these 2 are friends: It could be written either in public part or pvt no matter
    return temp;
}

int main(){
    Complex c1,c2,c3;

    c1.setnum(1,2);
    c1.displaynum();

    c2.setnum(3,4);
    c2.displaynum();

    // c3.sumcomplex(c1,c2): This is invalid, I understand
    c3=sumcomplex(c1,c2);
    c3.displaynum();
    return 0;
}


/*
Properties of Friend Functions: 

1. Not in the scope of the Class.
2. Since it is not in the scope of the class, it cannot be called from the object of that class. [c1.sumComplex===invalid], it is called like a normal function
3. Can be invoked without help of any object.
4. Usually contains objects as arguments.
5. Can be Declared inside private or public Section of the class.
6. Since a friend function is not a member of the class, it has no 'this' pointer.
   Therefore, it must access private members through an object
   (e.g., o1.a, o2.b) rather than simply writing a or b.

*/

/*

So, Basically a friend function is an outside function with inside access.
And there is a difference between "accessing private members" and "accessing them directly by name".

Reason: We can't do just cout<<a in this sumcomplex global function because "a" is not a global variable, 
It belongs to a specific Complex Object

The friend function is not a member function, so it does not have an implicit this pointer.
*/


/*

CONCEPT OF "THIS" POINTER: 

Member Functions
- A member function always belongs to an object and is called using an object.
  Example:
      c1.displaynum();

- Since c1 called the function, the compiler already knows that all member
  variables (a, b, etc.) belong to c1.


- Therefore, writing:
      a
  is automatically understood as:
      this->a

- Here, 'this' is a hidden pointer that points to the object that called
  the function.
- So:
      c1.displaynum()  -->  this points to c1
      c2.displaynum()  -->  this points to c2

--------------------------------------------------------------------

Friend Functions

- A friend function is NOT a member of the class.
- It is just a normal (global) function that has been given permission
  to access the class's private and protected members.

- Since a friend function is not owned by any object, it does NOT have
  a 'this' pointer.

  Example:
      sumcomplex(c1, c2);

- If we simply write:
      a

  the compiler gets confused because it does not know whose 'a' we mean.

  Is it:
      c1.a ?
      c2.a ?

- Therefore, we must explicitly specify the object:
      o1.a
      o2.a

  instead of simply writing:
      a
--------------------------------------------------------------------

Memory Trick

Member Function
→ Called by an object.
→ Compiler knows whose data to access.
→ Can write: a

Friend Function
→ Not called by an object.
→ Compiler does not know whose data to access.
→ Must write: object.a (e.g., o1.a, o2.a)

*/
