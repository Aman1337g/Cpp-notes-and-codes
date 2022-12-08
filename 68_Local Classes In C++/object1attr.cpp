/* Member attributes are allocated per object basis. Individual
   copies of attributes are available to individual objects. Thus,
   each object has its own attribute values. But, static attributes
   are shared by all the objects of a class. */

#include <iostream>
using namespace std;

class Myclass
{
public:
   static int count;
   int x, y;
   Myclass()
   {
      count++;
      cout << "Object " << count << " created!!\n";
   }
};

int Myclass ::count;

int main()
{
   Myclass ob1, ob2;
   ob1.x = 10;
   ob2.y = 200;
   cout << "x in ob1=" << ob1.x << endl;
   cout << "x in ob2=" << ob2.x << endl;
   cout << "______________________" << endl;
   cout << "y in ob1=" << ob1.y << endl;
   cout << "y in ob2=" << ob2.y << endl;
   cout << "______________________" << endl;

   ob1.x++;
   cout << "x in ob1=" << ob1.x << endl;
   cout << "x in ob2=" << ob2.x << endl;
   cout << "______________________" << endl;

   ob2.y++;
   cout << "y in ob1=" << ob1.y << endl;
   cout << "y in ob2=" << ob2.y << endl;
   cout << "______________________" << endl;

   return 0;
}
/*
OUTPUT

Object 1 created!!
Object 2 created!!
x in ob1=10
x in ob2=2000585325
______________________
y in ob1=4201627
y in ob2=200
______________________
x in ob1=11
x in ob2=2000585325
______________________
y in ob1=4201627
y in ob2=201
______________________

*/