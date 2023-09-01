/* Splitting a namespace */

#include <iostream>
using namespace std;

namespace A
{
   int i;
}

namespace A
{
   int j;
}

int main()
{
   A::i = 10;
   A::j = 20;
   cout << "Sum=" << A::i + A::j << endl;
   return 0;
}
/*
OUTPUT

Sum=30

*/