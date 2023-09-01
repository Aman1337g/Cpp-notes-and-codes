#include<iostream>
using namespace std;

// // Array of Objects
// class Employee {
//     string eid;
//     float salary;
//     public : 
//         void setId(void) {
//             salary = 28343.87;
//             cout<<"Enter the employee ID : ";
//             cin>>eid;
//         }
//         void getId(void) {
//             cout<<"Id of employee is : "<<eid<<endl<<endl;
//         }
// };

// int main() {
//     // Employee shobhan, shubham, pratush, riya;
//     // shobhan.setId();
//     // shobhan.getId();     // if there are many employees working then we have to make array of objects 

//     Employee boat[4];
//     for(int i=0; i<4; i++) {
//         boat[i].setId();
//         boat[i].getId();
//     }
//     return 0;
// }

// Passing objects as function argument

class Complex {
    float a;  float b;  static int count;
    public: 
        float setData(void) {
            cout<<"Enter x : "; cin>>a;
            cout<<"Enter y : "; cin>>b;
            count++;
            cout<<"Complex no. "<<count<<" : "<<a<<" + "<<b<<"i"<<endl<<endl;
        }
        float sumC(Complex o1, Complex o2) {
            a = o1.a + o2.a;
            b = o2.b + o2.b;
            cout<<"After Sum : "<<a<<" + "<<b<<"i"<<endl;
        } 
};

int Complex :: count;

int main() {
    Complex c1, c2, c3;
    c1.setData();
    c2.setData();
    c3.sumC(c1, c2);
}
/*
OUTPUT - For employee class

Enter the employee ID : B121006
Id of employee is : B121006

Enter the employee ID : B121055
Id of employee is : B121055

Enter the employee ID : B121020
Id of employee is : B121020

Enter the employee ID : B121030
Id of employee is : B121030
*/

/*
OUTPUT - For complex class

Enter x : 2
Enter y : 2
Complex no. 1 : 2 + 2i

Enter x : 3
Enter y : 4
Complex no. 2 : 3 + 4i

After Sum : 5 + 8i
*/