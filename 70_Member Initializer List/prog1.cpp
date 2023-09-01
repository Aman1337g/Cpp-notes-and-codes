/* Initializing a reference attribute */

#include <iostream>
using namespace std;

class Point
{
   int x;
   int &y;

public:
   Point(int a) : x(a), y(x)
   {
   }
   void show() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
   Point p(10);
   p.show();
   return 0;
}
/*
OUTPUT

x = 10 y = 10
*/