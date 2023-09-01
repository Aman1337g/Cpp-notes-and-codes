/* The std namespace */

#include <iostream>

int main()
{
   int a, b;
   std::cout << "Enter values for a and b" << std::endl;
   std::cin >> a >> b;
   std::cout << "Sum=" << a + b << std::endl;
   return 0;
}
/*
OUTPUT

Enter values for a and b
34 64
Sum=98

*/