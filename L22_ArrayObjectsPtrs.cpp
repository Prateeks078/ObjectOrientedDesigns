#include<iostream>
using namespace std;


class Shop{
    private:
    int id;
    int price;

    public:
    void setData(int i,int p){
      id=i;
      price=p;
    }

    void getData(){
        cout<<"The ID of the Item is: "<<id<<endl;
        cout<<"The Price of the Item is: "<<price<<endl;
    }
};

int main(){
    int size=3;
    int id,price;
    Shop *ptr=new Shop[size];
    Shop *temptr=ptr; // iykyk

    // Iterate thru all the items of the Shop 
    for(int i=0;i<size;i++)
    {
        cout<<"Please Enter the ID of the Item: "<<endl;
        cin>>id;

        cout<<"Please Enter the Price of the Item: "<<endl;
        cin>>price;

        ptr->setData(id,price);
        ptr++;
    }
    // temptr=ptr;

    for(int i=0;i<size;i++){
        temptr->getData();
        temptr++;
    }
    return 0;
}