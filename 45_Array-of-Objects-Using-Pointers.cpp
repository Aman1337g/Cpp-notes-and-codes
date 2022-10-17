#include <iostream>
using namespace std;

class KiranaItem
{
private:
    int id;
    float price;
    string item;

public:
    void setData()
    {
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter Item : ";
        cin >> item;
        // cin.ignore();
        cout << "Enter Price : ";
        cin >> price;
        cout << endl;
    }
    void getData(void)
    {
        cout << "ID : " << id << endl
             << "Item : " << item << endl
             << "Price : " << price << endl
             << endl;
    }
};

int main()
{
    int size;
    cout << "Enter quantity : ";
    cin >> size;
    cout << endl;

    KiranaItem *ptr = new KiranaItem[size];
    KiranaItem *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        ptr->setData();
        ptr++;
    }
    cout << "\n---------------Showing Items---------------\n\n\n";
    for (int i = 0; i < size; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    cout << "\n--------------------------------------------\n";

    return 0;
}
/*
OUTPUT

Enter quantity : 3

Enter ID : 1
Enter Item : Maggi
Enter Price : 50.78

Enter ID : 2
Enter Item : Toffee
Enter Price : 80

Enter ID : 3
Enter Item : Kurkure
Enter Price : 20.50


---------------Showing Items---------------


ID : 1
Item : Maggi
Price : 50.78

ID : 2
Item : Toffee
Price : 80

ID : 3
Item : Kurkure
Price : 20.5


--------------------------------------------

*/