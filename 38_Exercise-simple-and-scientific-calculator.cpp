#include <iostream>
#include <math.h>
using namespace std;
/*
Creatd 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays
       the results using anotherfunction.
    2. ScientifiCalculator - Takes input of two numbers using a utility function and performs any four scientific
       operation of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? ---> Multiple Inheritance
    Q2. Which mode of Inheritance are you using? ---> Public for both SimpleCalculator and ScientificCalculator Class
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculator
{
protected:
    double a, b;
    char c;

public:
    void utilitySimple()
    {
        cout << "Enter number 1 : ";
        cin >> a;
        cout << "Enter number 2 : ";
        cin >> b;
    }
    SimpleCalculator(){};
    void operationSShow()
    {
        cout << "Enter operation : ";
        cin >> c;
        switch (c)
        {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "Invalid Operation!!";
            break;
        }
    }
};
class ScientificCalculator
{
    double a, b;
    char c;

public:
    ScientificCalculator(){};
    void utilityScientific()
    {
        cout << "Enter number 1 : ";
        cin >> a;
        cout << "Enter number 2 : ";
        cin >> b;
    }
    void operationScShow()
    {
        cout << "Enter operation : ";
        cin >> c;
        switch (c)
        {
        case 's':
            cout << "sin(" << a << ")"
                 << " = " << sin(a) << endl;
            cout << "sin(" << b << ")"
                 << " = " << sin(b) << endl;
            break;
        case 'c':
            cout << "cos(" << a << ")"
                 << " = " << cos(a) << endl;
            cout << "cos(" << b << ")"
                 << " = " << cos(b) << endl;
            break;
        case 't':
            cout << "tan(" << a << ")"
                 << " = " << tan(a) << endl;
            cout << "tan(" << b << ")"
                 << " = " << tan(b) << endl;
            break;
        case 'p':
            cout << "pow(" << a << ", " << b << ")"
                 << " = " << pow(a, b) << endl;
            cout << "pow(" << b << ", " << a << ")"
                 << " = " << pow(b, a) << endl;
            break;
        }
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator hb1;
    cout << "Simple Operations :" << endl;
    hb1.utilitySimple();
    hb1.operationSShow();
    cout << "\nScientific Operations :" << endl;
    hb1.utilityScientific();
    hb1.operationScShow();

    return 0;
}
/*
OUTPUT

Simple Operations :
Enter number 1 : 1
Enter number 2 : 2
Enter operation : -
1 - 2 = -1

Scientific Operations :
Enter number 1 : 2
Enter number 2 : 4
Enter operation : p
pow(2, 4) = 16
pow(4, 2) = 16

*/