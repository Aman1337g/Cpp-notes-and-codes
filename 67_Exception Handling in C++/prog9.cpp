/* A user defined function can be
   restricted to throw a particular
   type of exception only. */

#include <iostream>
using namespace std;
void f(int k) throw(int, double) // restricted to throw only "int" and "double" type
{
   cout << "Inside a user defined function" << endl;
   if (k == 0)
      throw 100;
   else if (k == 1)
      throw 20.5;
   else if (k == 2)
      throw 'M';
   else
      throw "Hello";
}
int main()
{
   cout << "Entry" << endl;
   cout << "Enter an integer" << endl;
   int i;
   cin >> i;
   try
   {
      f(i);
   }
   catch (...)
   {
      cout << "Caught an exception" << endl;
   }

   cout << "End" << endl;

   return 0;
}
/*
OUTPUT

Entry
Enter an integer
2
Inside a user defined function
terminate called after throwing an instance of 'char'

*/