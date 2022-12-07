/* A user defined type can be thrown as an exception. */

#include <iostream>
using namespace std;

class Student
{
public:
   int id;
   Student(int i) { id = i; }
};

int main()
{
   int ii;
   try
   {
      cout << "Enter a student id" << endl;
      cin >> ii;
      if (ii < 1)
         throw Student(ii);
      else
         cout << "The student id=" << ii << endl;
   }
   catch (Student s)
   {
      cout << "Caught an invalid student id = " << s.id << endl;
   }

   cout << "End" << endl;

   return 0;
}
/*
OUTPUT

Enter a student id
-12
Caught an invalid student id = -12
End

*/