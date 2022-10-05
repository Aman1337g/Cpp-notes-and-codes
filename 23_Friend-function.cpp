#include<iostream>
using namespace std;

class Complex {
    float a;  float b;  static int count;
    // friend Complex sumC(Complex o1, Complex o2);  // can be written in private or public section.
    public: 
        float setData(float v1, float v2) {
            a = v1;     
            b = v2;
            count++;
        }
        // Below line means that NON MEMBER - sumC function is allowed to access the private attributes of the class Complex.
        friend Complex sumC(Complex o1, Complex o2);
        
        void print(void) {
            cout<<"Complex no. "<<count<<" : "<<a<<" + "<<b<<"i\n";
        }
};

Complex sumC(Complex o1, Complex o2) {
    Complex o3;
    o3.setData((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}

int Complex :: count;

int main() {
    Complex c1, c2, c3;

    c1.setData(2, 4);
    c1.print();

    c2.setData(4.8, 8);
    c2.print();
    c3 = sumC(c1, c2);
    cout<<"\nAfter adding : "<<endl;
    c3.print();
}
/*
    Properties of friend functions

    1. Not in the scope of class [Not a member function, method].
    2. Since it is not in the scope of the class, it cannot be called from the object of that class. Means - c3.sumC == INVALID
    3. Can be invoked without the help of any object.
    4. Usually contains the objects as arguments.
    5. Can be declared inside public or private section of the class.
    6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/ 

/*
OUTPUT

Complex no. 1 : 2 + 4i
Complex no. 2 : 4.8 + 8i

After adding :
Complex no. 3 : 6.8 + 12i
*/