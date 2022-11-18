/*
    WAP that will ask for a temperature in Fahrenheit and display it in Celsius using a class called
    called temp and member functions.
*/
#include <iostream>
using namespace std;

class temp
{
private:
    int F, C;

public:
    void setF()
    {
        cout << "Enter temperature in Fahrenheit : ";
        cin >> F;
    }
    void FtoC()
    {
        C = (5 / 9.0) * (F - 32.0);
        cout << F << " Fahrenheit in degree Celcius : " << C << endl;
    }
};

int main()
{
    temp t;
    t.setF();
    t.FtoC();

    return 0;
}
/*
OUTPUT

Enter temperature in Fahrenheit : 5
5 Fahrenheit in degree Celcius : -15

*/