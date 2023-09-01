#include <iostream>
using namespace std;

class Base
{
    int data1; //  private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    void getData2();
};

void Base ::setData()
{
    cout << "Enter data1 : ";
    cin >> data1;
    cout << "Enter data2 : ";
    cin >> data2;
}
int Base ::getData1() { return data1; }
void Base ::getData2() { cout << "Data2 : " << data2 << endl; }

class Derived : public Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
// if inherited privately , then we can set the data by writing - " setData(); "
{
    // setData();
    data3 = data2 * getData1();
}
void Derived ::display()
{
    cout << "Value of data1 : " << getData1() << endl;
    cout << "Value of data2 : " << data2 << endl;
    cout << "Value of data3 : " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
/*
OUTPUT

Enter data1 : 23
Enter data2 : 2
Value of data1 : 23
Value of data2 : 2
Value of data3 : 46

*/