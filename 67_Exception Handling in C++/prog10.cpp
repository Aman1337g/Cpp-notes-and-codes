/* An exception can be rethrown. */

#include <iostream>
using namespace std;
void f()
{
   cout << "Inside a user defined function" << endl;
   try
   {
      cout << "Inside try block in user defined function" << endl;
      throw "Hello";
   }
   catch (const char *cp)
   {
      cout << "caught an exception = " << cp << endl;
      throw;
   }
}
int main()
{
   cout << "Entry" << endl;
   try
   {
      f();
   }
   catch (const char *ccp)
   {
      cout << "Caught the rethrown exception = " << ccp << endl;
   }

   cout << "End" << endl;

   return 0;
}
/*
OUTPUT

Entry
Inside a user defined function
Inside try block in user defined function
caught an exception = Hello
Caught the rethrown exception = Hello
End

*/