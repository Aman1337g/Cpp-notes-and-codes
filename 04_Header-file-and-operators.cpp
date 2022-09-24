// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is not present in the current directory
using namespace std;
int main() {
    int a = 3, b = 8;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the operators in C++:"<<endl;

    // Arithmetic Operators
    cout<<"\nArithmetic Operators:\n";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a / b = "<<a/b<<endl;
    cout<<"a % b = "<<a%b<<endl;
    cout<<"a++ = "<<a<<endl;  // Post increment (assignment then increment)
    cout<<"++b = "<<b<<endl;  // Pre increment  (increment then assignment)

    // Assignment Operators --> used to assign values to variables
    // int a = 2, b = 89;
    // int ch = 'a'; 

    // Comparison Operators
    cout<<"\nComparison Operators:\n";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"a == b = "<<(a==b)<<endl;  // we have to put a bracket otherwise compiler will be confused which operator to evaluate first
    cout<<"a != b = "<<(a!=b)<<endl;
    cout<<"a <= b = "<<(a<=b)<<endl;
    cout<<"a >= b = "<<(a>=b)<<endl;
    cout<<"a < b = "<<(a<b)<<endl;
    cout<<"a > b = "<<(a>b)<<endl;

    // Logical Operators
    cout<<"\nLogical Operators : ";
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"((a==b) && (a<b)) = "<<((a==b) && (a<b))<<endl;  // we have to put a bracket otherwise compiler will be confused which operator to evaluate first
    cout<<"((a>b) || (a<b)) = "<<((a>b) || (a<b))<<endl;
    cout<<"!((a>b) || (a<b)) = "<<!((a>b) || (a<b))<<endl;

    return 0;
}

/*
OUTPUT

Operators in C++:
Following are the operators in C++:

Arithmetic Operators:
a = 3, b = 8
a + b = 11
a - b = -5
a * b = 24
a / b = 0
a % b = 3
a++ = 3
++b = 8

Comparison Operators:
a = 3, b = 8
a == b = 0
a != b = 1
a <= b = 1
a >= b = 0
a < b = 1
a > b = 0

Logical Operators : a = 3, b = 8
((a==b) && (a<b)) = 0
((a>b) || (a<b)) = 1
!((a>b) || (a<b)) = 0
*/