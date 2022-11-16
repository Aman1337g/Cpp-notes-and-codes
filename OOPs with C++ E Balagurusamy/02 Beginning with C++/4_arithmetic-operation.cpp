#include <iostream>
using namespace std;

int main()
{
    float a, b, c, x;
    int testCase;
    cout << "No. of testCases : ";
    cin >> testCase;
    while (testCase)
    {
        cin >> a >> b >> c;
        x = a / b - c;
        cout << x << endl;
        testCase--;
    }

    return 0;
}
/*
OUTPUT

No. of testCases : 2
250 85 25
-22.0588
300 70 70
-65.7143

*/