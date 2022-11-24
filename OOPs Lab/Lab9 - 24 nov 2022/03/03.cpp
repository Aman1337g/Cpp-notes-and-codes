#include <iostream>
#include "nested.h"
using namespace std;

int main()
{
    cout << nest::x + nest::inner::x;

    return 0;
}
/*
OUTPUT

52
*/