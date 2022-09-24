#include<iostream>
#include<iomanip>  // using 'setw' manipulator from header file 'iomanip'
using namespace std;
int main() {
    char a = 'B';
    cout<<"a was : "<<a<<endl;
    a = 'b';
    cout<<"Now, a is : "<<a<<endl;

    //********** Constants in C++ **********
    // const int b = 89;
    // cout<<"b was : "<<b<<endl;
    // b = 57;  // get and error as 'a' is now a constant
    // cout<<"Now, b is : "<<b<<endl;

    // ********** Manipulators in C++ **********
    // endl , setw

    int x = 45, y = 3, z = 38324;
    cout<<"Without setw manipulator :\n";  // setw --> to set width in bits
    cout<<"x = "<<x<<endl; 
    cout<<"y = "<<y<<endl; 
    cout<<"z = "<<z<<endl;

    cout<<"\nWith setw manipulator :\n";
    cout<<"x = "<<setw(4)<<x<<endl; 
    cout<<"y = "<<setw(4)<<y<<endl; 
    cout<<"z = "<<setw(4)<<z<<endl; 

    return 0;
}
/*
OUTPUT

a was : B
Now, a is : b
Without setw manipulator :
x = 45
y = 3
z = 38324

With setw manipulator :
x =   45
y =    3
z = 38324
*/