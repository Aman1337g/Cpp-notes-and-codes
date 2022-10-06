#include<iostream>
using namespace std;

// Example 1
// Forward Declaration
class Y;   

class X {
    int data;
    public:
        void setData(int value) {
            data = value;
        }
        void print(void) {
            cout<<"Value of X object : "<<data<<endl;
        }
    friend void add(X, Y);
};

class Y {
    int data;
    public:
        void setData(int value) {
            data = value;
        }
    friend void add(X, Y);
    void print(void) {
            cout<<"Value of Y object : "<<data<<endl;
        }
};

void add(X o1, Y o2) {
    cout<<"Adding data of X and Y objects : "<<o1.data+ o2.data;
}

int main() {
    X a;
    a.setData(5);
    a.print();
    
    Y b;
    b.setData(8);
    b.print();

    add(a, b);

    return 0;
}


// // Example 2
// // Forward declaration
// class c2;

// class c1 {
//         int val1;
//         public: 
//             void indata(int a) {
//                 val1 = a;
//             }
//             void display() {
//                 cout<<val1<<endl;
//             }
//         friend void exchange(c1 &, c2 &);
// };

// class c2 {
//         int val2;
//         public: 
//             void indata(int a) {
//                 val2 = a;
//             }
//             void display() {
//                 cout<<val2<<endl;
//             }
//         friend void exchange(c1 &, c2 &);
// };

// void exchange(c1 & a, c2 & b) {
//     int temp;
//     temp = a.val1;
//     a.val1 = b.val2;
//     b.val2 = temp;
// }

// int main() {
//     c1 x; c2 y;

//     cout<<"Before swapping :"<<endl;
//     x.indata(23);
//     cout<<"Val 1 : "; x.display();
//     y.indata(2);
//     cout<<"Val 2 : "; y.display();
//     exchange(x, y);
//     cout<<"\nAfter swapping :"<<endl;
//     // As x.display() is not returning any value we cannot write " cout<<"Val 1 : " << x.display(); " 
//     cout<<"Val 1 : "; x.display();
//     cout<<"Val 2 : "; y.display();

//     return 0;
// }
/*
OUTPUT - For example 1

Value of X object : 5
Value of Y object : 8
Adding data of X and Y objects : 13
*/
/*
OUTPUT - For example 2

Before swapping :
Val 1 : 23
Val 2 : 2

After swapping :
Val 1 : 2
Val 2 : 23
*/