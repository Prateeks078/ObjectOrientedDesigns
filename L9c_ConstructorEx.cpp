#include<iostream>
#include <math.h>
using namespace std;

// Complete the Task for Calculating the Distance between 2 coordinates 

class Point{
    private:
    int x,y;    
    friend double CalculateDist(Point,Point);

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

// Using Friend Function

double CalculateDist(Point p1,Point p2){
    int temp1,temp2;
    temp2=p2.y-p1.y;
    temp1=p2.x-p1.x;
    
    temp2=temp2*temp2;
    temp1=temp1*temp1;

    return sqrt(temp2+temp1);
}

int main(){
    Point pt1(1,2);
    Point pt2(3,4);

    pt1.GetPoint();
    pt2.GetPoint();

    double ans=CalculateDist(pt1,pt2);
    cout<<"The Distance Calculated between these 2 Points are: "<<ans<<endl;
    return 0;
}