/* Creating generic classes */

#include <iostream>
using namespace std;

template <class A>
class myclass
{
   A a;

public:
   void show(A temp)
   {
      a = temp;
      cout << "a=" << a << endl;
   }
};

int main()
{
   myclass<int> ob1;
   ob1.show(20);    // prints a = 20
   ob1.show(100.5); // prints a = 100

   myclass<char> ob2;
   ob2.show('D'); // prints a = D
   ob2.show(66);  // prints a = B

   return 0;
}
/*
OUTPUT

a=20
a=100
a=D
a=B

*/