/* Overloading specific function with generic function */

#include <iostream>
using namespace std;

template <class T>
void myfunc(T a, T b)
{
   cout << "Generic function is called" << endl;
   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
}

void myfunc(int a, int b)
{
   cout << "Specific function 1 is called" << endl;
   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
}

void myfunc(string a, string b)
{
   cout << "Specifiec function 2 is called" << endl;
   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
}

int main()
{
   int i1 = 10, i2 = 20;
   double d1 = 11.5, d2 = 13.4;
   char c1 = 'H', c2 = 'Y';
   string n1 = "Aman", n2 = "786";
   myfunc(i1, i2);
   myfunc(d1, d2);
   myfunc(c1, c2);
   myfunc(n1, n2);
   return 0;
}
/*
OUTPUT

Specific function 1 is called
a=10
b=20
Generic function is called
a=11.5
b=13.4
Generic function is called
a=H
b=Y
Specifiec function 2 is called
a=Aman
b=786

*/