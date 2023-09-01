/* const member function */

#include <iostream>
using namespace std;

class Point
{
   int i;

public:
   Point(int a) { i = a; }

   int geti() const
   {
      return i;
   }

   // void seti(int x) const
   // {
   //    i = x;
   // }
};

int main()
{
   Point p(100);
   // p.seti(90); // error as seti() is trying to modify the value of i
   cout << p.geti() << endl;
   return 0;
}
/*
OUTPUT

100

*/