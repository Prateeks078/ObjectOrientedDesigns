#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;
    cout<<"The Value of A is: "<<*p<<endl;

    float f=40.89;
    float *fptr=&f; // Aliter: float *f=new float(40.89)
    cout<<"The Value of F is "<<*fptr<<endl;


    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    cout<<"The Value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The Value of arr[1] is: "<<*(arr+1)<<endl;
    return 0;
}