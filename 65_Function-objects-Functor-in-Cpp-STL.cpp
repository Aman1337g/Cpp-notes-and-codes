#include <iostream>
using namespace std;
#include <functional>
#include <algorithm>
#define f(i, a, b) for (int i = a; i < b; i++)

int main()
{
    // Function Object (Functor): function wrapped in a class so that it is available like a object
    int arr[] = {1, 12, 4, 3, 46, 4, 66, 55, 13};
    // sort(arr, arr + 9); // sort array's first 9 elements in increasing order
    sort(arr, arr + 9, greater<int>()); // sorts the array in decreasing order
    f(i, 0, 9)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
OUTPUT

66 55 46 13 12 4 4 3 1
*/