#include<iostream>
using namespace std;

class Shop {
    int itemId[100];
    string itemName[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) {counter = 1;}
        void setPrice(void);
        void displayPrice(void);
 };

 void Shop :: setPrice(void) {
    cout<<"Enter Id of your item "<<counter<<": ";  cin>>itemId[counter];
    cout<<"Enter Item Name : ";  cin>>itemName[counter];
    cout<<"Enter price : ";  cin>>itemPrice[counter];
    cout<<"\n";
    counter++;
 }

 void Shop :: displayPrice(void) {
    cout<<"Displaying Items : \n\n";
    for (int i = 1; i < counter; i++) {
        cout<<"Item Id : "<<itemId[i]<<"\n";
        cout<<"Item Name : "<<itemName[i]<<"\n";
        cout<<"Item Price : "<<itemPrice[i]<<"\n";
        cout<<"\n";
    }
 }

int main() {
    Shop dukaan;
    dukaan.initCounter();
    int noItem;
    cout<<"Enter no. of items in dukaan : ";  cin>>noItem;
    cout<<"\nEnter details : \n\n";
    for (int i = 1; i <= noItem; i++) dukaan.setPrice();
    cout<<"\nFinished indexing ITEMS !!\n";
    cout<<"Displaying Details : NO. OF ITEMS - "<<noItem;
    cout<<"\n\n";
    dukaan.displayPrice();
    
    return 0;
}
/*
OUTPUT

Enter no. of items in dukaan : 3

Enter details :

Enter Id of your item 1: 001
Enter Item Name : Dahi
Enter price : 45

Enter Id of your item 2: 002
Enter Item Name : Maggi
Enter price : 50

Enter Id of your item 3: 003
Enter Item Name : Lays
Enter price : 20


Finished indexing ITEMS !!
Displaying Details : NO. OF ITEMS - 3

Displaying Items :

Item Id : 1
Item Name : Dahi
Item Price : 45

Item Id : 2
Item Name : Maggi
Item Price : 50

Item Id : 3
Item Name : Lays
Item Price : 20
*/