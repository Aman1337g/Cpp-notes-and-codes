#include <iostream>
using namespace std;
class Point
{
    int *p;

public:
    Point(int a)
    {
        p = new int;
        *p = a;
    }
    void show()
    {
        cout << "Point = " << *p << endl;
    }
    ~Point()
    {
        cout << "Destructor Called!!\n";
        delete p;
    }
    Point(const Point &copy)
    {
        p = new int;
        cout << "Copy Constructor Called!!" << endl;
        *p = *(copy.p);
    }
};
int main()
{

    Point p1(78);

    p1.show();
    cout << endl;
    {
        Point p2 = p1;
        p2.show();
    }
    p1.show();

    return 0;
}
