/* Ordering of catch block plays an
   important role when exceptions of
   both Base and Derived types are
   involved in the same program. In
   the given example the Base type
   catch block will be executed for
   the Derived type exception thrown. */

#include <iostream>
using namespace std;

class Base
{
};
class Derived : public Base
{
};

int main()
{
   Base b;
   Derived d;
   try
   {
      cout << "Inside try" << endl;
      throw d;
   }

   /*   //  Incorrect order is catch block for the base followed by derived

      catch (Base tempb)
      {
         cout << "Caught a base" << endl;
      }
      catch (Derived tempd)
      {
         cout << "Caught a derived" << endl;
      }
   */
   /* Correct order is catch block for the derived followed by base */

   catch (Derived tempd)
   {
      cout << "Caught a derived" << endl;
   }
   catch (Base tempb)
   {
      cout << "Caught a base" << endl;
   }

   cout << "End" << endl;

   return 0;
}
/*
OUTPUT

Inside try
Caught a derived
End

*/