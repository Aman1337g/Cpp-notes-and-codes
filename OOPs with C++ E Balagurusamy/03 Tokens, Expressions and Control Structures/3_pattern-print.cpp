/*
    Write a program to print the following output using for loops.
    1
    22
    333
    4444
    55555
    .......
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }

    return 0;
}
/*
OUTPUT

Enter number of lines : 5
1
22
333
4444
55555

*/