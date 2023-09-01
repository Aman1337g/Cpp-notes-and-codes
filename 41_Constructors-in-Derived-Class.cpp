#include <iostream>
using namespace std;
/*
Case1:
class B: public A {
    // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C {
    // Rrder of execution of constructor -> B() then C() then A()
};

Case3:
class A: public B, virtual public C {
    // Order of execution of constructor -> C() then B() then A();
};

// For more details - https://bit.ly/3s0huQa
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Class constructor called!!" << endl;
    }
    void printDataBase1(void)
    {
        cout << "Entered data1 : " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Class constructor called!!" << endl;
    }
    void printDataBase2(void)
    {
        cout << "Entered data2 : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    // If we had written "virtual public Base2" THEN Base2 class constructor has been called first
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class constructor called!!" << endl;
    }
    void pritnDataDerived(void)
    {
        cout << "Value of derived1 : " << derived1 << endl
             << "Value of derived2 : " << derived2 << endl;
    }
};

int main()
{
    Derived jena(4, 6, 22, 30);
    jena.printDataBase1();
    jena.printDataBase2();
    jena.pritnDataDerived();

    return 0;
}
/*
OUTPUT

Base1 Class constructor called!!
Base2 Class constructor called!!
Derived Class constructor called!!
Entered data1 : 4
Entered data2 : 6
Value of derived1 : 22
Value of derived2 : 30

*/