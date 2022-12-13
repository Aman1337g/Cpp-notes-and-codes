/* Any attempt to modify the values of attributes
of a const object will generate compile time error.
A const object can call only const member functions. */

#include <iostream>
using namespace std;

class Point
{
   int i;

public:
   Point(int a) { i = a; }

   void display() const
   {
      cout << "i=" << i << endl;
   }

   /*void show()
   {
      i = 100;
      cout << "i=" << i << endl;
   }*/
};

int main()
{
   Point const p(20);
   p.display();
   // p.show(); // error
   return 0;
}
/*
OUTPUT

i=20

*/