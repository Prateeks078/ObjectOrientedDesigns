#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;
    friend Complex sumcomplex(Complex o1, Complex o2); // Written Letter of Intent by Complex Class 

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
2. Since it is not in the scope of the class, it cannot be called from the object of that class. [c1.sumComplex===invalid]
3. Can be invoked without help of any object.
4. Usually contains objects as arguments.
5. Can be Declared inside private or public Section of the class.
6. It cannot access the members directly with the help of their names instead need object_name.member_name to access any member.

*/