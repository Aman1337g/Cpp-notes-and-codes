/* Creating generic functions with template */

#include <iostream>
using namespace std;

template <class T>
void myswap(T &a, T &b)
{
   T temp;
   temp = a;
   a = b;
   b = temp;
}

int main()
{
   int i1 = 10, i2 = 20;
   double d1 = 11.5, d2 = 13.4;
   char c1 = 'H', c2 = 'Y';

   cout << "Before swapping" << endl;
   cout << "____________________________" << endl;
   cout << "i1=" << i1 << " i2=" << i2 << endl;
   cout << "d1=" << d1 << " d2=" << d2 << endl;
   cout << "c1=" << c1 << " c2=" << c2 << endl;

   myswap(i1, i2);
   myswap(d1, d2);
   myswap(c1, c2);

   cout << "After swapping" << endl;
   cout << "____________________________" << endl;
   cout << "i1=" << i1 << " i2=" << i2 << endl;
   cout << "d1=" << d1 << " d2=" << d2 << endl;
   cout << "c1=" << c1 << " c2=" << c2 << endl;

   return 0;
}
/*
OUTPUT

Before swapping
____________________________
i1=10 i2=20
d1=11.5 d2=13.4
c1=H c2=Y
After swapping
____________________________
i1=20 i2=10
d1=13.4 d2=11.5
c1=Y c2=H

*/