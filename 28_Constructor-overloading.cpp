#include<iostream>
using namespace std;

class Complex {
    int x, y;
    public:
        Complex() {     // default Constructor
            x = 0;
            y = 0;
        }

        Complex(int a, int b) {     // parameterised Constructor
            x = a;
            y = b;
        }

        Complex(int a) {        // parameterised Constructor
            x = a;
            y = 0;
        }

        void print(void) {
            cout<<"Complex number : "<<x<<" + "<<y<<"i\n";
        }
};

using namespace std;
int main() {
    Complex c1(4, 9);
    c1.print();

    Complex c2(3);
    c2.print();

    Complex c3;
    c3.print();
    
    return 0;
}
/*
OUTPUT

Complex number : 4 + 9i
Complex number : 3 + 0i
Complex number : 0 + 0i

*/