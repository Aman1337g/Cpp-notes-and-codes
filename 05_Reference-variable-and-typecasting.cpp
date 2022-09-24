#include<iostream>
using namespace std;
int main() {
    /* ************** float, double, long double literals ************** */

    double a = 7.8;
    long double b = 7.8;
    float c = 7.8;
    // by default C++ compiler takes '7.8' as a double
    // if we put 'f' after the number then it is taken as float
    // 'f' or 'F' --> float , 'l' or 'L' --> long double
    float d = 7.8f;
    cout<<"Value of a is : "<<a<<endl<<"Value of b is : "<<b<<endl<<"Value of c is : "<<c<<endl;
    cout<<"Value of d is : "<<d<<endl;
    cout<<endl;
    cout<<"The size of 7.8 is : "<<sizeof(7.8)<<endl;
    cout<<"The size of 7.8f is : "<<sizeof(7.8f)<<endl;
    cout<<"The size of 7.8F is : "<<sizeof(7.8F)<<endl;
    cout<<"The size of 7.8l is : "<<sizeof(7.8l)<<endl;
    cout<<"The size of 7.8L is : "<<sizeof(7.8L)<<endl;

    /* ************** Reference Variables ************** */
    // Rohan Das ---> Monty ---> Rohu ---> DangerousCoder
    int x = 79;
    int &y = x; //copy of x is created (both points to the same memory location)
    cout<<"x : "<<x<<endl<<"y : "<<y<<endl;

    /* ************** Typecasting ************** */
    float z = 34.53;
    int w = 67;

    cout<<"The value of (float)w is : "<<(float)w<<endl; 
    cout<<"The value of float(w) is : "<<float(w)<<endl;

    cout<<"The value of (int)b is : "<<(int)z<<endl; 
    cout<<"The value of int(b) is : "<<int(z)<<endl; 

    cout<<"w + z = "<<w + z<<", sizeof : "<<sizeof(w + z)<<endl;
    cout<<"w + (int)z = "<<w + (int)z<<", sizeof : "<<sizeof(w + (int)z)<<endl;
    cout<<"w + int(z) = "<<w + int(z)<<", sizeof : "<<sizeof(w + int(z))<<endl;
    cout<<"(float)w + z = "<<(float)w + z<<", sizeof : "<<sizeof((float)w + z)<<endl;
    

    return 0;
}

/*
OUTPUT

Value of a is : 7.8
Value of b is : 7.8
Value of c is : 7.8
Value of d is : 7.8

The size of 7.8 is : 8
The size of 7.8f is : 4
The size of 7.8F is : 4
The size of 7.8l is : 12
The size of 7.8L is : 12
x : 79
y : 79
The value of (float)w is : 67
The value of float(w) is : 67
The value of (int)b is : 34
The value of int(b) is : 34
w + z = 101.53, sizeof : 4
w + (int)z = 101, sizeof : 4
w + int(z) = 101, sizeof : 4
(float)w + z = 101.53, sizeof : 4
*/