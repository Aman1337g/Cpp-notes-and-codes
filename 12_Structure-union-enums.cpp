#include<iostream>
using namespace std;

typedef struct employee{
    int empId;  // 4 bytes
    char favChar;  // 1 bytes
    float salary;  // 4 bytes
} emp;  // total bytes allocated = 4+1+4 = 9

int main() {
    struct employee aman;
    struct employee roshan;
    emp shubham; // using typedef
    aman.empId = 9092;
    aman.favChar = 'd';
    aman.salary = 298429.37;
    roshan.empId = 007;
    roshan.favChar = 'e';
    roshan.salary = 294638429.99;
    shubham.empId = 47;
    shubham.favChar = 'f';
    shubham.salary = 111122;
    
    
    cout<<"Id of aman : "<<aman.empId<<endl;
    cout<<"Favourite character of aman : "<<aman.favChar<<endl;
    cout<<"Salary of aman : "<<aman.salary<<endl;
    cout<<endl;
    cout<<"Id of roshan : "<<roshan.empId<<endl;
    cout<<"Favourite character of roshan : "<<roshan.favChar<<endl;
    cout<<"Salary of roshan : "<<roshan.salary<<endl;
    cout<<endl;
    cout<<"Id of shubham : "<<shubham.empId<<endl;
    cout<<"Favourite character of shubham : "<<shubham.favChar<<endl;
    cout<<"Salary of shubham : "<<shubham.salary<<endl;
    cout<<endl;
    
    // Unions - like structure but provide better memory management (if we want to use any 'one' type of data)

    // For example - if there is a barter system and you want to use any 'one' of these things as exchange basis
    union money{
    int rice;  // 4 bytes
    char car;  // 1 bytes
    float pounds;  // 4 bytes
    };  // total bytes allocated = 4(max.) [memory is shared initially]

    union money m1;
    m1.rice = 83;
    m1.car = 'c'; // now we are using m1.car so m1.rice now contains garbage value 
    // m1.pounds = 898;
    cout<<"m1.rice : "<<m1.rice<<endl;
    cout<<"m1.car : "<<m1.car<<endl;
    cout<<endl;

    // eunum
    enum meal {breakfast , lunch , dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    int m2 = dinner;
    cout<<"m2 : "<<m2;
    return 0;
}
/*
OUTPUT

Id of aman : 9092
Favourite character of aman : d
Salary of aman : 298429

Id of roshan : 7
Favourite character of roshan : e
Salary of roshan : 2.94638e+008

Id of shubham : 47
Favourite character of shubham : f
Salary of shubham : 111122

m1.rice : 99
m1.car : c

0
1
2
m2 : 2
*/