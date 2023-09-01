/* A user defined function can also
   contain an entire exception
   handling routine.  */

#include <iostream>
using namespace std;
void f(int n)
{
   cout << "Inside a user defined function" << endl;
   try
   {
      cout << "Inside try block" << endl;
      throw "hello";
   }
   catch (const char *cp)
   {
      cout << "Caught a string= " << cp << endl;
   }
   throw n;
}
int main()
{
   int i = 8;
   try
   {
      f(i);
   }
   catch (int n)
   {
      cout << "Caught integer i=" << n << endl;
   }
   cout << "Entry" << endl;
   f(i);
   cout << "End" << endl;

   return 0;
}
/*
OUTPUT

Inside a user defined function
Inside try block
Caught a string= hello
Caught integer i=8
Entry
Inside a user defined function
Inside try block
Caught a string= hello
terminate called after throwing an instance of 'int'

*/