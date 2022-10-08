#include<iostream>
using namespace std;

class Simple {
    private:
        int data1, data2, data3; 
        static int count;
    public:
        Simple(int a, int b = 32, int c = 22) {
            data1 = a;
            data2 = b;
            data3 = c;
            count++;
        }
        void printData() {
            cout<<"Object "<<count<<".\nThe value of data1 = "<<data1<<".\nThe value of data2 = "<<data2<<".\nThe value of data3 = "<<data3<<".\n\n";
        }
};

int Simple :: count;

int main() {
    Simple s1(1, 4);
    s1.printData();

    Simple s2 = Simple(3);
    s2.printData();

    Simple s3 = Simple(1, 2, 3);
    s3.printData();
    
    return 0;
}
/*
OUTPUT 

Object 1.
The value of data1 = 1.
The value of data2 = 4.
The value of data3 = 22.

Object 2.
The value of data1 = 3.
The value of data2 = 32.
The value of data3 = 22.

Object 3.
The value of data1 = 1.
The value of data2 = 2.
The value of data3 = 3.


*/