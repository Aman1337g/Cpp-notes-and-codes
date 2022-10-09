#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(void) {}    // default Constructor
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14 in percentage
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    cout << interestRate << endl;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "The principal amount was " << principal << "." << endl
         << "Return value after " << years << " yrs."
         << " is " << returnValue << "." << endl
         << endl;
}

int main()
{
    // Dynamic Initialisation
    BankDeposit bd1, bd2, bd3; // We are already declaring objects bd1, bd2, bd3 so it is necessary to have a default constructor otherwise will show error
    int p;
    int y;
    float r; // float
    int R;   // percentage

    bd3.show();

    cout << "Enter the value of p , y and r : ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p , y and R : ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
/*
OUTPUT

The principal amount was 1984068669.
Return value after 8 yrs. is 9.81189e+032.

Enter the value of p , y and r : 100 2 .04

The principal amount was 100.
Return value after 2 yrs. is 108.16.

Enter the value of p , y and R : 100 2 4
0.04

The principal amount was 100.
Return value after 2 yrs. is 108.16.


*/