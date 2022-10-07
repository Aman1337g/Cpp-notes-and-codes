#include<iostream>
using namespace std;

string name;

class Complex {
    int a, b;   static int count;
    friend void print(Complex);
    public:
    // Creating a constructor
    /*
        1. Constructor is a special member function with same name as of the class.
        2. It is used to initialize the objects of its class.
        3. It is automatically invoked whenever an object is created.
    */
   Complex(void); // Constructor declaration
};

int Complex :: count;   // static data member

void print(Complex o1) {    // ----> Default Constructor [which don't accepts any parameter]
    cout<<"\nHello "<<name<<", Object Created\n";
    cout<<"Complex number "<<o1.count<<" is : "<<o1.a<<" + "<<o1.b<<"i\n";
}

Complex :: Complex(void) { a = 10; b = 92; count++;}

int main() {
    cout<<"Enter your name : "; getline(cin, name);
    Complex c1;
    print(c1);
    Complex c2;
    print(c2);
    Complex c3;
    print(c3);
    
    return 0;
}
/*  Characteristics of Constructors

    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever the object is created.
    3. They cannot return values and do not have return types.
    4. It can have default arguments;
    5. We cannot refer to their address.
*/
/*
OUTPUT 

Enter your name : Aman Gupta

Hello Aman Gupta, Object Created
Complex number 1 is : 10 + 92i

Hello Aman Gupta, Object Created
Complex number 2 is : 10 + 92i

Hello Aman Gupta, Object Created
Complex number 3 is : 10 + 92i
*/