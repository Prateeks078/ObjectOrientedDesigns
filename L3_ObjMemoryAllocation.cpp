#include<iostream>
using namespace std;

class Shop{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initcounter(){counter=0;} // Inititalising the counter to Zero
    void setPrice();
    void getPrice();
    void displayPrice();
};

void Shop::setPrice(){
    cout<<"Enter ID of your Item: "<<endl;
    cin>>itemId[counter];

    cout<<"Enter Price of your item: "<<endl;
    cin>>itemPrice[counter];

    counter++;
}

void Shop::displayPrice(){
    for(int i=0;i<counter;i++){
        cout<<"Id of your item is "<<itemId[i]<<" and price for this item is: "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop Dukaan;
    Dukaan.initcounter();
    Dukaan.setPrice();
    Dukaan.displayPrice();
    return 0;
}