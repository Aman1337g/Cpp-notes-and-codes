/*
    Write a function that creates a vector of user-given size M using new operator.
*/
#include <iostream>
using namespace std;

int main()
{
    int M, *a;
    cout << "Enter size of array : ";
    cin >> M;
    a = new int[M];
    cout << "Enter array of size " << M << endl;
    for (int i = 0; i < M; i++)
        cin >> a[i];
    cout << "Entered array :\n";
    for (int i = 0; i < M; i++)
        cout << a[i] << " ";

    delete[] a;

    return 0;
}
/*
OUTPUT

Enter size of array : 5
Enter array of size 5
11 2 3 4 55
Entered array :
11 2 3 4 55
*/