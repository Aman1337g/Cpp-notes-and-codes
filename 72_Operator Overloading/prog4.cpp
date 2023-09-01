/* Overloading a unary prefix operator using member operator function */

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
	Point operator++()
	{
		x++;
		y++;
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
	++p1; // p1.operato++()
	p1.display();
	return 0;
}
/*
OUTPUT

x=11
y=21
*/