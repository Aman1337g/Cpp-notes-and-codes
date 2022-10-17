#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 55;
    int *ptr = &a;
    *ptr = 30;
    cout << "The value of a is " << *(ptr) << endl;

    // new Keyword  //--> dynamically allocating memory
    // int* p = new int(40);
    float *p = new float(32.98);
    cout << "\nThe value at address p(" << p << ") is " << *(p) << endl;

    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << "\nThe value of arr[0] is " << arr[0] << endl;
    delete[] arr; //--> frees the array memory
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of arr[" << i << "] is " << *(arr + i) << endl;
    }

    /* delete Operator -> Delete is an operator that is used to destroy array and non-array(pointer) objects
    which are created by new expression.*/
    delete p;
    cout << "\nThe value at address p(" << p << ") is " << *(p) << endl; // --> now memory at address "p" is free
    return 0;
}
/*
OUTPUT

The value of a is 30

The value at address p(0x10d6de8) is 32.98

The value of arr[0] is 10

The value of arr[0] is 17657560
The value of arr[1] is 17629376
The value of arr[2] is 30
The value of arr[3] is 40
The value of arr[4] is 50

The value at address p(0x10d6de8) is 2.59755e-038

*/