#include <iostream>
using namespace std;

template <class T1 = int, class T2 = string>
class Aman
{
    T1 rollNo;
    T2 name;

public:
    Aman(T1 r, T2 n)
    {
        rollNo = r;
        name = n;
    }
    void display()
    {
        cout << "Value of rollNo is " << rollNo << endl;
        cout << "Value of name is " << name << endl
             << endl;
    }
};

int main()
{
    Aman<> ob1(6, "Aman Kumar Gupta");
    ob1.display();

    Aman<int, float> ob2(1, 4.24);
    ob2.display();

    return 0;
}
/*
OUTPUT

Value of rollNo is 6
Value of name is Aman Kumar Gupta

Value of rollNo is 1
Value of name is 4.24


*/