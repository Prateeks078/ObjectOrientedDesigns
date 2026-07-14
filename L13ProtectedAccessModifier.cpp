#include<iostream>
using namespace std;

/*

For a Protected Member:

                        Public Derivation      Private Derivation      Protected Derivation
1. Private Members:       Not Inherited           Not Inherited             Not Inherited          
2. Public Members:           Public                 Private                   Protected
3. Protected Members:       Protected               Private                   Protected 

*/

class Base{
    private:
    int a;

    protected:
    int b;
};

class Derived:private Base{

};

int main(){
    Base b;
    b.a;

    Derived d;
    // d.b; ---> u can just play with it and Learn up with the help of errors about Accessibility
    return 0;
}