#include <iostream>
#include "swap.h"
using namespace std;
int main()
{
     int x, y;
     cout << "Enter x and y : ";
     cin >> x >> y;
     cout << "Before Swapping\n"
          << "x = " << x << ", y = " << y << endl;
     swap(x, y);
     cout << "After Swapping\n"
          << "x = " << x << ", y = " << y << endl;
}
/*
OUTPUT

Enter x and y : 45 5
Before Swapping
x = 45, y = 5
After Swapping
x = 5, y = 45
*/
