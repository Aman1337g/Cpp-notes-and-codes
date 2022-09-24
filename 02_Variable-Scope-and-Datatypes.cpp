#include<iostream>
using namespace std;

int glo = 98;  // global variable

void sum() {
    int glo = 86;  // local variable
    cout<<glo<<endl;
}
int main() {   // program starts from here
    // int a = 5;
    // int b = 8;
    int a = 5, b = 8;
    float pi = 3.141567;

    int glo = 9;  // local variable  // Local variable has higher precedence than Global variable
    glo = 89;
    bool d = true; // have value 1
    bool e = false; // have value 0

    char c = 'A';
    cout<<"Value of a is "<<a<<". Value of b is "<<b<<".\n";
    cout<<"Value of pi is : "<<pi;
    cout<<"\nValue of c is : "<<c;
    cout<<"\nValue of glo is : "<<glo<<endl; // endl to end line instead of it we can use escape sequence character => \n
    cout<<"\nValue of b is : "<<d<<endl<<"Value of e is : "<<e<<endl;

    sum();
    cout<<"Global value of glo : "<<::glo;  // '::' --> using scope resolution operator before the variable will give its global value
    return 0;
}

/*
OUTPUT

Value of a is 5. Value of b is 8.
Value of pi is : 3.14157
Value of c is : A
Value of glo is : 89

Value of b is : 1
Value of e is : 0
86
Global value of glo : 98
*/