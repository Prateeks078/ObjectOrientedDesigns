#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;    

    public:
    // Using Parameterized Constructor Here 
    Point(int Xcoord, int Ycoord){
        x=Xcoord;
        y=Ycoord;
    }

    void GetPoint(void){
        cout<<"The Co-Ordinates are: ("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    Point p(1,2);
    p.GetPoint();
    return 0;
}