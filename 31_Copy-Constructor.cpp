#include <iostream>
using namespace std;

class Number
{
private:
    int a;
    static int count;

public:
    Number() { a = 0; }

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    { // copy Constructor
        cout << "\nCopy Constrctor Called!!" << endl;
        a = obj.a;
    }

    void displayNum()
    {
        ++count;
        cout << "The number in object " << count << " is : " << a << endl;
    }
};

int Number ::count;

int main()
{
    Number x(97), y, z(47), z2;
    x.displayNum();
    y.displayNum();
    z.displayNum();

    // if we want to create an object z1(let) to resemble x or y or z then we will use Copy Constructor
    Number z1(x); // copy Constructor invoked
    z1.displayNum();

    z2 = z; // copy Constructor not called , as z2 was already declared
    z2.displayNum();

    Number z3 = z; // copy Constructor invoked  // declared and initialized at same time
    z3.displayNum();

    return 0;
}
/*
OUTPUT

The number in object 1 is : 97
The number in object 2 is : 0
The number in object 3 is : 47

Copy Constrctor Called!!
The number in object 4 is : 97
The number in object 5 is : 47

Copy Constrctor Called!!
The number in object 6 is : 47

*/