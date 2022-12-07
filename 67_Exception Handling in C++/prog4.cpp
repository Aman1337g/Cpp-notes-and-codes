/* This program will terminate abnormally as
   the matching catch block is not available
   immediately after the try block. */

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

   cout << "End" << endl; // This should not be placed here

   catch (double d)
   {
      cout << "Caught an int d=" << d << endl;
   }

   return 0;
}
/*
OUTPUT

prog4.cpp:19:4: error: expected 'catch' before 'cout'
*/