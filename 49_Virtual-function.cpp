#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void Display()
    {
        cout << "1 Displaying Base Class variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void Display()
    {
        cout << "2 Displaying Base Class variable var_base : " << var_base << endl;
        cout << "2 Displaying Derived Class variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;

    base_class_pointer = &obj_Derived;
    base_class_pointer->Display();

    return 0;
}
/*
OUTPUT

2 Displaying Base Class variable var_base : 1
2 Displaying Derived Class variable var_derived : 2

*/