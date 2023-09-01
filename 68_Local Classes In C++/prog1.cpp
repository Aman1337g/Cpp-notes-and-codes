/*Local Classes in C++
A class declared inside a function becomes
local to that function and is called Local
Class in C++. For example, in the following
program, Test is a local class in fun().*/

#include <iostream>
using namespace std;

void fun()
{
	class Test // local to fun
	{
		/* members of Test class */
	};
}

int main()
{
	return 0;
}