#include <iostream>
#include "newadd.h"
#include "newsub.h"
using namespace std;

int main()
{
   cout << "Addition result=" << A::calculate(10, 20) << endl;
   cout << "Subtraction result=" << B::calculate(10, 20) << endl;
   return 0;
}
/*
OUTPUT

Addition result=30
Subtraction result=-10

*/