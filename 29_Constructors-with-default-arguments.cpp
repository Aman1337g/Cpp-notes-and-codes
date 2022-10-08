#include<iostream>
using namespace std;

class Simple {
    private:
        int data1, data2; 
        static int count;
    public:
        Simple(int a, int b = 32) {
            data1 = a;
            data2 = b;
            count++;
        }
        void printData() {
            cout<<"Object "<<count<<".\nThe value of data1 = "<<data1<<". The value of data2 = "<<data2<<".\n";
        }
};

int Simple :: count;

int main() {
    Simple s1(1, 4);
    s1.printData();

    Simple s2 = Simple(3);
    s2.printData();
    
    return 0;
}