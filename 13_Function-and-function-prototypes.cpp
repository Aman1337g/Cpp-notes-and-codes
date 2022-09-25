// Function is an important part of top-down structured programming

#include<iostream>
using namespace std;

// int add(int a , int b) {
//     return a+b;
// }

// Function prototype - if funtion is after main function, to tell the compiler that add function is there we have to use function prototyping
// type function-name (arguments)
// int add(int a, int b); //--> Acceptable
// int add(int , int); //--> Acceptable
// int add(int a, int); //-->Acceptable
// int add(int a, b); //--> Not Acceptable
int add(int, int); 
void g(); // OR void g(void);
int main() {
    int x, y; 
    cout<<"Enter x and y : ";
    cin>>x>>y;  // x and y are actual parameters
    cout<<"Sum of x and y is : "<<add(x,y)<<endl;
    g();
    return 0;
}

int add(int a , int b) { 
    // a and b are formal parameters taking taking values from actual parameters x and y
    return a+b;
}

// Does every function need to return a value? ans- NO. eg-
void g() {
    cout<<"Hello, Good morning";
}

/*
OUTPUT

Enter x and y : 3 4
Sum of x and y is : 7
Hello, Good morning
*/