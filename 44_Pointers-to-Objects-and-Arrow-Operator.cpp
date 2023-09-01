#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;
    static int count;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
        count++;
    }

    void getData()
    {
        cout << "Complex Number " << count << " : " << real << " + " << imaginary << "i" << endl
             << "---------------------------" << endl
             << "Real part is " << real << endl
             << "Imaginary part is " << imaginary << endl
             << endl;
    }
};

int Complex ::count;

int main()
{
    Complex ob1;
    ob1.setData(1, 4);
    ob1.getData();

    Complex *ptr;
    // we can also write "Complex *ptr = new Complex;"

    Complex ob2;
    ptr = &ob2;
    ptr->setData(2, 4);
    (*ptr).getData(); // "ptr->" is equivalent to "(*ptr)."

    Complex ob3;
    ptr = &ob3;
    ptr->setData(22, 4);
    (*ptr).getData();
    // we have to use parenthesis as "." operator has higher precedence than "*" operator

    // Array of Objects
    Complex *ptr1 = new Complex[2];

    ptr1->setData(23, 32);
    ptr1->getData();

    (ptr1 + 1)->setData(2, 1);
    (ptr1 + 1)->getData();

    return 0;
}
/*
OUTPUT

Complex Number 1 : 1 + 4i
---------------------------
Real part is 1
Imaginary part is 4

Complex Number 2 : 2 + 4i
---------------------------
Real part is 2
Imaginary part is 4

Complex Number 3 : 22 + 4i
---------------------------
Real part is 22
Imaginary part is 4

Complex Number 4 : 23 + 32i
---------------------------
Real part is 23
Imaginary part is 32

Complex Number 5 : 2 + 1i
---------------------------
Real part is 2
Imaginary part is 1


*/