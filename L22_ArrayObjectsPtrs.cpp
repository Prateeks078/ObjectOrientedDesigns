#include<iostream>
using namespace std;


class Shop{
    private:
    int id;
    int price;

    public:
    void setData(void){
      cout<<"Enter the ID of the Item: "<<endl;
      cin>>id;

      cout<<"Enter the Price of the Item: "<<endl;
      cin>>price;
    }

    void getData(){
        cout<<"The ID of the Item is: "<<endl;
        cout<<"The Price of the Item is: "<<endl;
    }
};

int main(){
    int size;
    Shop *ptr=new Shop[size];
    
    return 0;
}