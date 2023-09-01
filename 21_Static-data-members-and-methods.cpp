#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    // int count = 0;  // For subsequent objects it will start from 0 , so we will make it static.
    static int count; // static variables by default initialised with 0
    // In OOPs , static variables are also called as class variables.
    string name;
    string id;

public:
    void setData(void)
    {
        cout << "Enter ID : ";
        cin >> id;
        cin.ignore();
        cout << "Enter name : ";
        getline(cin, name);
        count++;
    }
    void getData(void)
    {
        cout << "\nEmployee : " << this->count << endl;
        cout << "ID  : " << this->id << endl;
        cout << "Name  : " << name << endl;
    }
    static void getCount(void)
    { // static member function - it can only access static variables and functions
        // cout<<id;    // shows error as it is not a static data member
        cout << "The value of count is : " << count << endl
             << endl;
    }
};

int Employee ::count; // count is the static data member of the class Employee

int main()
{
    Employee aman, rohan, roshan;
    // aman.id = "B121006";
    // aman.count = 1;      // cannot do this as id and count are private
    aman.setData();
    aman.getData();
    // aman.getCount();
    Employee ::getCount();

    rohan.setData();
    rohan.getData();
    // rohan.getCount();
    Employee ::getCount();

    roshan.setData();
    roshan.getData();
    // roshan.getCount();
    Employee ::getCount();

    return 0;
}
/*
OUTPUT

Enter ID : B121006
Enter name : Aman Kumar Gupta

Employee : 1
ID  : B121006
Name  : Aman Kumar Gupta
The value of count is : 1

Enter ID : B121045
Enter name : Rohan Mohanty

Employee : 2
ID  : B121045
Name  : Rohan Mohanty
The value of count is : 2

Enter ID : B121046
Enter name : Roshan Dash

Employee : 3
ID  : B121046
Name  : Roshan Dash
The value of count is : 3
*/