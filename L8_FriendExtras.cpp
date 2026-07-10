#include <iostream>
using namespace std;

class Y; // Forward declaration iykyk

class X{
    private:
    int d1;

    public:
    void setData(int x){
        d1=x;
    }

    friend void Addval(X obj1, Y obj2);
};

class Y{
    private:
    int d2;

    public:
    void setData(int y){
        d2=y;
    }
    friend void Addval(X obj1, Y obj2);
};

//Global Function
void Addval(X obj1, Y obj2){
    cout<<"The result of this operation would be: "<<obj1.d1+obj2.d2;
}

int main(){
    X oc1;
    Y oc2;

    oc1.setData(23);
    oc2.setData(234);

    Addval(oc1,oc2);
    return 0;
}