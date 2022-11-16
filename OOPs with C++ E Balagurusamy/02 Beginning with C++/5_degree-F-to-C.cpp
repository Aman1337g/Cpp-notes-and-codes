#include <iostream>
using namespace std;

int main()
{
    float F, C;
    cout << "Enter temperature in Farhenheit : ";
    cin >> F;
    C = (5 / 9.0) * (F - 32.0);
    cout << F << " Fahrenheit in degree Celcius : " << C << endl;

    return 0;
}
/*
OUTPUT

Enter temperature in Farhenheit : 5
5 Fahrenheit in degree Celcius : -15

*/