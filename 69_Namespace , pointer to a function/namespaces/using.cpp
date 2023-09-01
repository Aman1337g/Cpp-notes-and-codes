/* The using keyword */

#include <iostream>
#include "newadd.h"
#include "newsub.h"
using namespace std;

int main()
{
   using namespace A; // by default calculate of A will be used
   cout << "Addition result=" << calculate(10, 20) << endl;
   cout << "Subtraction result=" << B::calculate(10, 20) << endl;
   return 0;
}
/*
OUTPUT

Addition result=30
Subtraction result=-10

*/