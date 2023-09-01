#include<iostream>
using namespace std;
int main() {
    // What is a pointer? ---> data type which holds the address of other data types

    int a = 3;
    // int* b = &a;
    int* b;
    b = &a;
    // & --> (Address of) operator
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;
    
    // * --> (value at) Dereference operator
    cout<<"\nThe value at address b is : "<<*b<<endl;

    // pointer to pointer
    int** c;
    c = &b;
    cout<<"\nThe address of pointer b is : "<<c<<endl;
    cout<<"The address of pointer b is : "<<&b<<endl;
    cout<<"\nThe value at address b is : "<<**c<<endl;
    cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;
    cout<<"The value at address c is : "<<*c<<endl;

    return 0;
}

/*
OUTPUT

The address of a is : 0x61ff08
The address of a is : 0x61ff08

The value at address b is : 3

The address of pointer b is : 0x61ff04
The address of pointer b is : 0x61ff04

The value at address b is : 3
The value at address value_at(value_at(c)) is : 3
The value at address c is : 0x61ff08
*/