#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:  ->  used when constructor becomes complex
constructor (argument-list) : initailization-section
{
    assignment + other code;
}

class Test {
    int a;
    int b;
    public:
        Test(int i, int j) : a(i) , b(j) { constructor-body } 
};
*/

class Test {
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i) , b(j)     // 1 4
        // Test(int i, int j) : a(i) , b(i+j)   // 1 5
        // Test(int i, int j) : a(i) , b(2*j)   // 1 8
        // Test(int i, int j) : a(i) , b(a+j)      // 1 5
        // Test(int i, int j) : b(i) , a(b+j)      // RED Flag , this will create problems because a will be initialized first
        Test(int i, int j) : a(i)
        {
            b = j;
            cout<<"Constructor called!!"<<endl
                <<"Value of a : "<<a<<endl    
                <<"Value of b : "<<b<<endl;
        } 
};

int main() {
    Test(1, 4);
    
    return 0;
}
/*
OUTPUT

Constructor called!!
Value of a : 1
Value of b : 4

*/