/*
    Wrtie a program to read two numbers from the keyboard and display the larger vlaue on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    if (a >= b)
        cout << "Greater between " << a << " and " << b << " is " << a << endl;
    else
        cout << "Greater between " << a << " and " << b << " is " << b << endl;
    return 0;
}
/*
OUTPUT

Enter a and b : 45 32
Greater between 45 and 32 is 45

*/