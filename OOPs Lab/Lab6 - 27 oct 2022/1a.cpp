#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the size of array : ";
    cin >> n;
    float *arr = new float[n];
    printf("Enter array of size %d : ", n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}
