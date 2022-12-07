/* Exception handling using try, throw, and catch */

#include <iostream>
using namespace std;

int main()
{
   cout << "Entry" << endl;
   try
   {
      cout << "Inside try" << endl;
      cout << "An exception has been thrown" << endl;
      throw 100.99f;
   }
   catch (int i)
   {
      cout << "Caught an int i=" << i << endl;
   }
   catch (...)
   {
      cout << "Caught exception other than interger type" << endl;
   }

   cout << "End" << endl;
   return 0;
}
/*
OUTPUT

Entry
Inside try
An exception has been thrown
Caught exception other than interger type
End

*/