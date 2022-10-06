#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    void add(Complex, Complex);
    float sumRealComplex(Complex, Complex);
    float sumCompComplex(Complex, Complex);
};

class Complex
{
    float a;
    float b;
    static int count;

public:
    float setData(float v1, float v2)
    {
        a = v1;
        b = v2;
        count++;
    }

    // Indivisually declaring functions as friends
    // friend float Calculator :: sumRealComplex(Complex, Complex);
    // friend float Calculator :: sumCompComplex(Complex, Complex);
    // friend void Calculator :: add(Complex, Complex);

    // Aliter : Declaring whole Calculator class as friend
    friend class Calculator;

    void print(void)
    {
        cout << "Complex no. o" << count << " : " << a << " + " << b << "i\n";
    }
};

int Complex ::count;

float Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
float Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
void Calculator ::add(Complex o1, Complex o2)
{
    cout << "Sum of o1 and o2 : " << (o1.a + o2.a) << " + " << (o1.b + o2.b) << "i";
}

int main()
{
    Complex o1, o2;
    o1.setData(23, 223);
    o1.print();
    o2.setData(24, 2);
    o2.print();
    Calculator calc;
    float res = calc.sumRealComplex(o1, o2);
    float resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is : " << res << "\n";
    cout << "The sum of complex part of o1 and o2 is : " << resc << "\n";
    calc.add(o1, o2);

    return 0;
}
/*
OUTPUT

Complex no. o1 : 23 + 223i
Complex no. o2 : 24 + 2i
The sum of real part of o1 and o2 is : 47
The sum of complex part of o1 and o2 is : 225
Sum of o1 and o2 : 47 + 225i
*/