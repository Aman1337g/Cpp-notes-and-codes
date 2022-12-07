/* This program will terminate abnormally as
   there is no matching catch block is available
   for the thrown exception of type double. */

#include <iostream>
using namespace std;

int main()
{
   cout << "Entry" << endl;
   try
   {
      cout << "Inside try" << endl;
      cout << "An exception has been thrown" << endl;
      throw 20.5;
      cout << "This statement is not going to execute" << endl;
   }
   catch (int i)
   {
      cout << "Caught an int i=" << i << endl;
   }

   cout << "End" << endl;
   return 0;
}
/*
OUTPUT

Entry
Inside try
An exception has been thrown
terminate called after throwing an instance of 'double'

*/