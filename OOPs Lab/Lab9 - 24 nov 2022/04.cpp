#include <iostream>
using namespace std;
class A
{
    int x;
    char y;

public:
    A(int i, char j)
    {
        x = i;
        y = j;
    }
    void show() const
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main()
{
    A const ob(3, 'P');
    ob.show();
    return 0;
}
/*
OUTPUT

x = 3
y = P

*/