#include <iostream>
#include "ascending.h"
#include "descending.h"
using namespace std;
#define f(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n, *arr;
    cout << "Enter size of array : ";
    cin >> n;
    arr = new int[n];
    cout << "Enter array : ";
    f(i, 0, n) { cin >> arr[i]; }
    cout << "Entered array : ";
    f(i, 0, n) { cout << arr[i] << " "; }
    cout << endl;
    cout << "\nArray in Increasing order : ";
    asc::sort(arr, n);
    f(i, 0, n) { cout << arr[i] << " "; }
    cout << "\nArray in Descending order : ";
    des::sort(arr, n);
    f(i, 0, n) { cout << arr[i] << " "; }

    return 0;
}
/*
OUTPUT

Enter size of array : 5
Enter array : 212 11 1 3 24
Entered array : 212 11 1 3 24

Array in Increasing order : 1 3 11 24 212
Array in Descending order : 212 24 11 3 1
*/