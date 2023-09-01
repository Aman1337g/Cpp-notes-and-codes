/* For multiple exceptions, there must be
   multiple catch blocks. */

#include <iostream>
using namespace std;
void f(int k)
{
   cout << "Inside a user defined function" << endl;
   if (k == 0)
   {
      throw 100;
      cout << "IIIT Sophmores !!!" << endl; // This statement is not going to execute
   }
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
   catch (int ii)
   {
      cout << "Caught an int ii=" << ii << endl;
   }
   catch (double dd)
   {
      cout << "Caught a double dd=" << dd << endl;
   }
   catch (char cc)
   {
      cout << "Caught a char cc=" << cc << endl;
   }
   catch (const char *cp)
   {
      cout << "Caught a string=" << cp << endl;
   }

   cout << "End" << endl;

   return 0;
}
/*
OUTPUT

Entry
Enter an integer
909
Inside a user defined function
Caught a string=Hello
End

*/