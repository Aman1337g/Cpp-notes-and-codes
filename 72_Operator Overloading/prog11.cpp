/*overloading comparison operator */

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
	/*int operator==(Point rhs)
	{
	   if(x==rhs.x&&y==rhs.y)
	   return 1;
	   else return 0;
	}*/
	bool operator==(Point rhs)
	{
		if (x == rhs.x && y == rhs.y)
		{
			return true;
		}
		else
			return false;
	}
};

int main()
{
	Point p1(1, 2), p2(35, 2);
	if (p1 == p2)
		cout << "Both are equal" << endl;
	else
		cout << "Unequal" << endl;
	return 0;
}
/*
OUTPUT

Unequal
*/