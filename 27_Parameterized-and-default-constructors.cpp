#include<iostream>
#include<math.h>
using namespace std;

// Example 1
class Complex {
    int a, b;
    public:
        Complex(int, int);
        void print(void) {
            cout<<"Complex number : "<<a<<" + "<<b<<"i\n";
        }
};

Complex :: Complex(int x, int y) {      // -----> Parameterized Constructor as it takes 2 parameters
    a = x;
    b = y;
}

int main() {
    // Implicit Call
    Complex a(32, 23);
    a.print();

    // Explicit Call
    Complex b = Complex(2, 3);
    b.print();

    
    return 0;
}


// Example 2

class Point {
    int a, b; friend float distance(Point, Point);
    public:
        Point(int x, int y) {
            a = x;
            b = y;
        }
        void displayPoint() {
            cout<<"The coordinates are : ("<<a<<", "<<b<<")\n";
        }
};

// Function to calculate distance between two points
float distance(Point o1, Point o2) {
    cout<<"The distance between points ("<<o1.a<<", "<<o1.b<<")"<<" and "<<"("<<o2.a<<", "<<o2.b<<")"<<" is "<<sqrt(pow((o1.a-o2.a), 2) + pow((o1.b-o2.b), 2)); 
}

int main() {
    Point c1(1, 0);
    c1.displayPoint();
    Point c2 =  Point(6, 0);
    c2.displayPoint();
    distance(c1, c2);

    return 0;
}
/*
OUTPUT - For example 1

Complex number : 32 + 23i
Complex number : 2 + 3i
*/
/*
OUTPUT - For example 2

The coordinates are : (1, 0)
The coordinates are : (6, 0)
The distance between points (1, 0) and (6, 0) is 5
*/