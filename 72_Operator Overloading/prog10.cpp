/* Overloading assignment operator using member operator function */

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
	Point operator=(Point rhs)
	{
		x = rhs.x;
		y = rhs.y;
		return *this;
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
	p1.display();
	Point p2;
	p2.display();
	p2 = p1; // p2.operator=(p1)
	p2.display();
	return 0;
}
/*
OUTPUT

x=10
y=20
x=0
y=0
x=10
y=20
*/