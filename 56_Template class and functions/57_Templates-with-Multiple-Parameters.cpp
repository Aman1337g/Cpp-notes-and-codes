#include <iostream>
using namespace std;

/*
CLASS TEMPLATE WITH MULTIPLE PARAMETERS (ONE, TOW OR MORE THAN TWO)
template <class T1, class T2, ......(COMMA SEPERATED)>
class nameOfClass {
    // body
}
*/
static int count; // Created counter for objects

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        count++;
        cout << "Object " << count << " created!!" << endl;
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    myClass<int, char> obj(7, 'a');
    obj.display();
    myClass<string, double> obj2("Aman", 389.34);
    obj2.display();

    return 0;
}
/*
OUTPUT

Object 1 created!!
7
a
Object 2 created!!
Aman
389.34

*/