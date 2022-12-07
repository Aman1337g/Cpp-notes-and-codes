/* Overlaoding generic functions */

#include <iostream>
using namespace std;

template <class A, class B>
void f(A a, B b)
{
   cout << "a=" << a << " b=" << b << endl;
}

template <class A>
void f(A a)
{
   cout << "a=" << a << endl;
}

int main()
{
   f(10);
   f(100.6, "Hello");
   f("aman");

   return 0;
}
/*
OUTPUT

a=10
a=100.6 b=Hello
a=aman

*/