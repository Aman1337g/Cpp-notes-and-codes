/* Initializing an object which is a member of another class */

#include <iostream>
using namespace std;

class A
{
public:
   int y;
   char c;
   A(int b, char c1)
   {
      y = b;
      c = c1;
   }
};

class Point
{
   A aob;

public:
   Point() : aob(10, 'Z') {}
   void show() { cout << "y = " << aob.y << " c = " << aob.c << endl; }
};

int main()
{
   Point p;
   p.show();
   return 0;
}
/*
OUTPUT

y = 10 c = Z

*/