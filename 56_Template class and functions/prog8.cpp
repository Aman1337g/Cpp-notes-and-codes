/* Creating class with generic type having default types */

#include <iostream>
using namespace std;

template <class A, class B = int>
class myclass
{
   A a;
   B b;

public:
   void show(A temp1, B temp2)
   {
      a = temp1;
      b = temp2;
      cout << "a=" << a << " b=" << b << endl;
   }
   void show(A temp1)
   {
      a = temp1;
      cout << "a=" << a << endl;
   }
};

int main()
{
   myclass<double, char> ob1;
   ob1.show(20.6, 'F');

   myclass<double> ob2;
   ob2.show(30.9, 100);

   myclass<string> ob3;
   ob3.show("Aman Kumar Gupta");

   return 0;
}
/*
OUTPUT

a=20.6 b=F
a=30.9 b=100
a=Aman Kumar Gupta

*/