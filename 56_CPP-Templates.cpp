// #include <iostream>
// using namespace std;

// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }
//     int dotProduct(vector &v)
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int main()
// {
//     // vector v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 6;
//     // v1.arr[2] = 12;

//     // vector v2(3);
//     // v2.arr[0] = 22;
//     // v2.arr[1] = 30;
//     // v2.arr[2] = 46;

//     // for float numbers

//     vector v1(3);
//     v1.arr[0] = 4.78;
//     v1.arr[1] = 6.77;
//     v1.arr[2] = 12.3;

//     vector v2(3);
//     v2.arr[0] = 22.7;
//     v2.arr[1] = 30.01;
//     v2.arr[2] = 46;
//     // result will be wrong for float numbers

//     int a = v1.dotProduct(v2);
//     cout << a << endl;

//     return 0;
// }

// Using template

#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 6;
    v1.arr[2] = 12;

    vector<int> v2(3);
    v2.arr[0] = 22;
    v2.arr[1] = 30;
    v2.arr[2] = 46;

    int a = v1.dotProduct(v2);
    cout << a << endl;

    // for float numbers

    vector<float> v3(3);
    v3.arr[0] = 4.78;
    v3.arr[1] = 6.77;
    v3.arr[2] = 12.3;

    vector<float> v4(3);
    v4.arr[0] = 22.7;
    v4.arr[1] = 30.01;
    v4.arr[2] = 46;
    // result will be wrong for float numbers

    double b = v4.dotProduct(v3);
    cout << b << endl;

    return 0;
}
/*
OUTPUT

820
877.474

*/