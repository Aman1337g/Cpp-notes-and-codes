/* Overloading a binary operator using member operator function */

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
	Point operator+(Point rhs)
	{
		Point temp;
		temp.x = this->x + rhs.x;
		temp.y = this->y + rhs.y;
		return temp;
	}
	void display()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};

int main()
{
	Point p1(10, 20), p2(100, 200);
	Point p3;
	p3 = p1 + p2; // same as calling p1.operator+(p2)
	p3.display();
	return 0;
}
/*
OUTPUT

x=110
y=220

*/