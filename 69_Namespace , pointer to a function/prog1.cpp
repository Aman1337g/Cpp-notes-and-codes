/* Pointer to a function */

// Example 1
#include <iostream>
using namespace std;

int f(int, int);

template <class T>
T operation(T x, T y, T (*functionCall)(T, T))
{
   T result;
   result = (*functionCall)(x, y);
   return result;
}

template <class T>
T subtract(T x, T y)
{
   return x - y;
}

int main()
{
   int (*fp)(int, int) = f; // Pointer to a function
   cout << "Memory location of function f = " << fp << "\n"
        << "Value initially = " << *fp << endl;
   cout << "Sum = " << (*fp)(10, 20) << endl;

   // Using fuction name
   // float
   cout << "Subtracting 78.25 and 23.13 = " << operation(78.25, 23.13, subtract) << endl;
   // integer
   cout << "Adding 78.25 and 23.13 = " << operation(78, 23, f) << endl;

   // Using pointer
   fp = subtract;
   // result will be a integer as fp is an integer pointer
   cout << "Subtracting 78.25 and 23.13 = " << (*fp)(78.25, 23.13) << endl;

   int m, n;
   int (*minus)(int, int) = subtract;

   m = operation(7, 5, f);
   n = operation(20, m, minus);
   cout << n;

   return 0;
}

int f(int a, int b)
{
   return (a + b);
}
/*
OUTPUT

Memory location of function f = 1
Value initially = 1
Sum = 30
Subtracting 78.25 and 23.13 = 55.12
Adding 78.25 and 23.13 = 101
Subtracting 78.25 and 23.13 = 55
8
*/

// Example 2
// pointer to functions
#include <iostream>
using namespace std;

int addition(int a, int b)
{
   return (a + b);
}

int subtraction(int a, int b)
{
   return (a - b);
}

int operation(int x, int y, int (*functocall)(int, int))
{
   int g;
   g = (*functocall)(x, y);
   return (g);
}

int main()
{
   int m, n;
   int (*minus)(int, int) = subtraction;

   m = operation(7, 5, addition);
   n = operation(20, m, minus);
   cout << n;
   return 0;
}
/*
// OUTPUT

// 8
// */