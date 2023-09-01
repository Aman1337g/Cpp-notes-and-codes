/* Overloading a unary postfix operator using non-member operator function */

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
	friend Point operator++(Point &ref, int dummy);

	void display()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};

Point operator++(Point &ref, int dummy)
{
	ref.x++;
	ref.y++;
	return ref;
}

int main()
{
	Point p1(10, 20);
	p1++;
	p1.display();
	return 0;
}
/*
OUTPUT

x=11
y=21
*/