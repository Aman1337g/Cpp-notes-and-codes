/* Initializing a const attribute */

#include <iostream>
using namespace std;

class Point
{
   const int x;
   string name;

public:
   Point(int a, string n) : x(a), name(n) {}
   void show() { cout << "x = " << x << endl
                      << "name = " << name << endl; }
};

int main()
{
   Point p(10, "Aman");
   p.show();
   return 0;
}
/*
OUTPUT

x = 10
name = Aman

*/