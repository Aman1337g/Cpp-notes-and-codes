#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    A &setData1(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "a : " << a << endl;
    }
};

int main()
{
    // "this" is a keyword which is a pointer which points to the object which invokes the member function
    A ob1;
    ob1.setData(5);
    ob1.getData();

    A ob2;
    cout << "\n";
    ob2.setData1(5).getData();
    ob2.getData();
    return 0;
}
/*
OUTPUT

a : 5

a : 5
a : 5

*/