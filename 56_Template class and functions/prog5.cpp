/* Function with generic type parameter and specific type parameter */

#include <iostream>
using namespace std;

template <class A>
void f(A a, int b)
{
   cout << "a=" << a << " b=" << b << endl;
}

int main()
{
   f("Goodmorning", 100);
   return 0;
}
/*
OUTPUT

a=Goodmorning b=100

*/