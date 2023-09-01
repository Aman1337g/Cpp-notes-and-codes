/* Function with multiple generic types */

#include <iostream>
using namespace std;

template <class A, class B>
void f(A a, B b)
{
   cout << "a=" << a << " b=" << b << endl;
}

int main()
{
   f(10, 200.5);
   f('T', "Hello");
   f("Aman", "b121006");
   return 0;
}
/*
OUTPUT

a=10 b=200.5
a=T b=Hello
a=Aman b=b121006

*/