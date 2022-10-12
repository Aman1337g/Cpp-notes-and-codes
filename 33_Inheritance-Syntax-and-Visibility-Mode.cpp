#include <iostream>
using namespace std;

// Base class
class Employee
{
private:
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 3432.00;
    }
    Employee() {}
};

// Derived Class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
NOTE:
1. Default vidsiblility mode is private.
2. Private visibility Mode : Public members of the base class becomes private members of the derived class.
3. Public visibility Mode : Public members of the base class becomes public members of the derived class.
4. Private members are never inherited.
*/

// Creating a Programmer class derived from Employee Base Class
class Programmer : Employee
{ // When we make a derived class , automatically default constructor of base class is called so we have to make a default constructor also
public:
    string languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = "C, C++";
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee roshan(46), shobhan(55);
    cout << roshan.salary << endl;
    cout << shobhan.salary << endl;
    Programmer skillF(6);
    cout << skillF.languageCode << endl;
    skillF.getData();
    // cout<<skillF.id;    // This will not work if inherited privately , only work for - " class Programmer : public Employee "

    return 0;
}
/*
OUTPUT

3432
3432
C, C++
6

*/