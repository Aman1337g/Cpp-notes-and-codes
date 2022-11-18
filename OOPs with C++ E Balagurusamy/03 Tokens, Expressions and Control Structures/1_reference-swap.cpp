/*
    Write a function using reference variables as arguments to swap the values of a pair of integers.
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    cout << "\nBefore Swapping\n"
         << "a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After Swapping\n"
         << "a = " << a << " b = " << b << endl;

    return 0;
}
/*
OUTPUT

Enter a and b : 23 2

Before Swapping
a = 23 b = 2
After Swapping
a = 2 b = 23

*/