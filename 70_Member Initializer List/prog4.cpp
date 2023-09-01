/* Explicit constructor is required when we don't want
a type conversion from primitive type to user defined type  */

#include <iostream>
using namespace std;

class Point
{
   int x;

public:
   explicit Point(int a) { x = a; }
   void show() { cout << "x=" << x << endl; }
};

int main()
{
   Point p(10);
   // Point p2 = 100; // not allowed when using explicit constructor
   Point p2 = Point(100); // This will work with explicit cosntructor
   p.show();
   p2.show();

   return 0;
}
/*
OUTPUT

x=10
x=100

*/