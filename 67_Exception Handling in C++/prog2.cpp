/* catch block is not a function call */

#include <iostream>
using namespace std;

int main()
{
   cout << "Entry" << endl;
   try
   {
      cout << "Inside try" << endl;
      cout << "An exception has been thrown" << endl;
      throw 100; // program looks for catch block after seeing "throw"
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
Caught an int i=100
End

*/