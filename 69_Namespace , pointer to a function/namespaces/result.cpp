#include <iostream>
#include "add.h"
#include "sub.h"
using namespace std;

int main()
{
   cout << "Addition result=" << calculate(10, 20) << endl;
   cout << "Subtraction result=" << calculate(10, 20) << endl;
   return 0;
}
/*
OUTPUT

In file included from result.cpp:3:0:
sub.h: In function 'int calculate(int, int)':
sub.h:1:5: error: redefinition of 'int calculate(int, int)'
 int calculate(int a, int b)
     ^~~~~~~~~
In file included from result.cpp:2:0:
add.h:1:5: note: 'int calculate(int, int)' previously defined here
 int calculate(int a, int b)
     ^~~~~~~~~

*/