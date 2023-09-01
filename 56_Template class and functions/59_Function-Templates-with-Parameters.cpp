#include <iostream>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    return (a + b) / 2.0;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    printf("The average of these numbers is %.3f\n", a);
    a = funcAverage(5, 2.4);
    printf("The average of these numbers is %.3f\n", a);
    a = funcAverage(5.3, 2.4);
    printf("The average of these numbers is %.3f", a);
    return 0;
}