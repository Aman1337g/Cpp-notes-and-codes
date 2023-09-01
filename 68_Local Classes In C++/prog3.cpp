/*2) All the methods of Local classes must be
defined inside the class only. For example,
program 1 works fine and program 2 fails in
compilation.*/

// PROGRAM 1
#include <iostream>
using namespace std;

void fun()
{
	class Test // local to fun
	{
	public:
		// Fine as the method is defined inside the local class
		void method()
		{
			cout << "Local Class method() called";
		}
	};

	Test t;
	t.method();
}

int main()
{
	fun();
	return 0;
}
/*Output:

Local Class method() called */

// PROGRAM 2
#include <iostream>
using namespace std;

void fun()
{
	class Test // local to fun
	{
	public:
		void method();
	};

	// Error as the method is defined outside the local class
	void Test::method()
	{
		cout << "Local Class method()";
	}
}

int main()
{
	return 0;
}

/* Output:

Compiler Error:
 In function 'void fun()':
 error: a function-definition is not allowed here
 before '{' token */