#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void Display()
    {
        cout << "Displaying Base Class variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void Display()
    {
        cout << "Displaying Base Class variable var_base : " << var_base << endl;
        cout << "Displaying Derived Class variable var_derived : " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;

    base_class_pointer = &obj_Derived; // Pointing base class to derived class

    base_class_pointer->var_base = 98;
    // base_class_pointer->var_derived = 938;   // Will throw an error
    base_class_pointer->Display();

    base_class_pointer->var_base = 938;
    base_class_pointer->Display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_Derived;
    derived_class_pointer->var_derived = 79;
    cout << endl;
    derived_class_pointer->Display();

    return 0;
}
/*
OUTPUT

Displaying Base Class variable var_base : 98
Displaying Base Class variable var_base : 938

Displaying Base Class variable var_base : 938
Displaying Derived Class variable var_derived : 79

*/