/* Overloading a binary operator using non-member operator function */

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
	friend Point operator+(Point lhs, Point rhs);
	void display()
	{
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};
Point operator+(Point lhs, Point rhs)
{
	Point temp;
	temp.x = lhs.x + rhs.x; // can access x as it is a friend function
	temp.y = lhs.y + rhs.y; // can access y as it is a friend function
	return temp;
}

int main()
{
	Point p1(10, 20), p2(100, 200);
	Point p3;
	p3 = p1 + p2; // same as calling Operator+(p1,p2)
	p3.display();
	return 0;
}
/*
OUTPUT

x=110
y=220
*/