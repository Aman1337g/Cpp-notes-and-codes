/* Nesting of namespaces */

#include <iostream>
using namespace std;

namespace outer
{
   int a;

   namespace inner
   {
      int b;
   }

}

int main()
{
   int a = 300;
   outer::a = 100;
   outer::inner::b = 200;
   cout << "Sum=" << a + outer::a + outer::inner::b << endl;
   return 0;
}
/*
OUTPUT

Sum=600

*/

// Using "using" keyword
int main()
{
   using namespace outer;
   using namespace inner;
   a = 300;
   b = 200;
   cout << "Sum=" << a + outer::a + b << endl;
   return 0;
}
/*
OUTPUT

Sum=800

*/