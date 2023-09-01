/* mutable attributes */

/* Sometimes we may want that one or more
members of a class can be modified, even
if we declare a const member function. And
other members cannot be modified through a
const member function. This constness can
be overriden by declaring an attribute as
mutable*/

#include <iostream>
using namespace std;

class Point
{
   mutable int i;
   int j;

public:
   Point() {}
   Point(int x, int y)
   {
      i = x;
      j = y;
   }
   void seti(int x) const
   {
      i = x;
   }
   void display() const { cout << "i = " << i << " j = " << j << endl; }
};

int main()
{
   Point p(10, 20);
   p.display();
   p.seti(90); // as i is set as mutable, seti() can change i's value
   p.display();
   return 0;
}
/*
OUTPUT

i = 10 j = 20
i = 90 j = 20

*/