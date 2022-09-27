#include<iostream>
using namespace std;
#define PI 3.14

int sum(int a, int b) {
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c) {
    cout<<"\n\nUsing function with three arguments"<<endl;
    return a+b+c;
}

// Volume of cylinder 
int volume(int r , int h) {
    cout<<"\n\nVolume of cylinder with radius "<<r<<" unit and height "<<h<<" unit is : "<<PI*r*r*h<<" sq. units"<<endl;
}

// Volume of cube
int volume(int a) {
    cout<<"Volume of cube with side "<<a<<" unit is : "<<a*a*a<<" sq. units"<<endl;
}

// Volume of cuboid
int volume(int l, int b, int h) {
    cout<<"Volume of cuboid with length "<<l<<" unit, breadth "<<b<<" unit and height "<<h<<" unit is : "<<l*b*h<<" sq. units"<<endl;
}

int main() {
    
    cout<<"The sum of 2 and 5 is : "<<sum(2,5);
    cout<<"The sum of 2 and 5 and 8 is : "<<sum(2,5,8);
    volume(2,5);
    volume(6);
    volume(2,3,5);
    return 0;
}
/*
OUTPUT

Using function with two arguments
The sum of 2 and 5 is : 7

Using function with three arguments
The sum of 2 and 5 and 8 is : 15

Volume of cylinder with radius 2 unit and height 5 unit is : 62.8 sq. units
Volume of cube with side 6 unit is : 216 sq. units
Volume of cuboid with length 2 unit, breadth 3 unit and height 5 unit is : 30 sq. units
*/