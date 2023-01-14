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
	/* A reference parameter is required as it is a non-member function
	   and it does not have a *this pointer */
	friend Point operator++(Point &ref)
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
	++p1;
	p1.display();
	return 0;
}
/*
OUTPUT

x=11
y=21
*/