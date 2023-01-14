/* Overloading a unary prefix operator using non-member operator function */

#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	friend Point operator++(Point ref)
	{
		ref.x++;
		ref.y++;
		return ref;
	}
	void display()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};

int main()
{
	Point p1(10, 20);
	++p1; // operator(p1)
	p1.display();
	/* won't show any error, but p1 won't be modified
	   as the operator function has modified the ref object,
	   not p1 */
	return 0;
}
/*
OUTPUT

x=10
y=20
*/