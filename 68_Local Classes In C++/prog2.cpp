/*Following are some interesting facts about local classes.
1) A local class type name can only be used in the
enclosing function. For example, in the following
program, declarations of t and tp are valid in fun(),
but invalid in main().*/

#include <iostream>
using namespace std;

void fun()
{
	// Local class
	class Test
	{
		/* ... */
	};

	Test t;	  // Fine
	Test *tp; // Fine
}

int main()
{
	Test t;	  // Error
	Test *tp; // Error
	return 0;
}
/*
OUTPUT

prog2.cpp: In function 'int main()':
prog2.cpp:24:2: error: 'Test' was not declared in this scope
  Test t; // Error
  ^~~~
prog2.cpp:25:8: error: 'tp' was not declared in this scope
  Test *tp; // Error
		^~

*/