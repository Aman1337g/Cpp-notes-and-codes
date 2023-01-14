/* Advantages of overloading a binary operator using non-member operator function

There are several advantages to overloading a binary operator using a non-member operator function:

1. It allows the left-hand operand to be of a different type than the class that defines the operator function.
   This can be useful in cases where the class is a wrapper around a built-in type or a third-party library, and
   the operator needs to work with both the class and the underlying type.
2. It allows the class to remain in a valid state even if the right-hand operand is not of the same type as the class.
   This can be useful in cases where the class is part of a larger expression and the right-hand operand is an
   intermediate result that is not necessarily of the same type as the class.
3. It allows the operator to be used in contexts where the class cannot be modified, such as in templates or constexpr
   functions.
4. It allows the operator to be called on the left-hand operand even if it is an rvalue. This can be useful in cases
   where the class is used as a temporary object, and the operator needs to be called on it before it goes out of scope.

Overall, overloading a binary operator using a non-member operator function can increase the flexibility and usability
of a class, and make it easier to use in a variety of contexts.
*/

#include <iostream>
using namespace std;

class Point
{
	int x;

public:
	Point() { x = 0; }
	Point(int a) { x = a; }
	friend int operator+(int lhs, Point rhs)
	{
		int temp;
		temp = lhs + rhs.x;
		return temp;
	}
	void display()
	{
		cout << "x=" << x << endl;
	}
};

int main()
{
	Point p(10);
	p.display();
	int i = 200;
	int z = i + p; // same as calling Operator+(i,p)
	cout << "z=" << z << endl;
	return 0;
}
/*
OUTPUT

x=10
z=210
*/