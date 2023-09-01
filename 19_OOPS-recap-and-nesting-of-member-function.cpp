/*
    OOPs - Classes and Objects

>    C++ --> Initially called --> C with classes by Bjarne Stroustrup
>    Class --> Extension of strucutres (in C)
>    Structures had limitations
        --> members are public
        --> no methods (functions can't be included)
>    Classes --> structures + more
>    Classes --> can have methods and properties 
>    Classes --> can make few members as private & few as public.
>    Structures in C++ are typedefed
>    We can declare objects along with the class declaration : 
        class Employee {
            // Class definition
        } aman, rohan, roshan;
>    aman.salary = 89 makes no sense if salary is private
*/

// Nested of member functions

#include<iostream>
#include<string>
using namespace std;

class binary {
    string s; // by default access modifier is private
    public: 
        void read(void);
        int chk_bin(void);
        void comp(void) {
            
            // chk_bin(); // nesting of chk_bin(); --> member function (works for both PUBLIC and PRIVATE case )

            if(chk_binRet()) {
                cout<<"Entered number is binary , taking 1's complement!!"<<endl;
                for (int i = 0; i < s.length(); i++) {
                    if(s.at(i) == '0') s.at(i) = '1';
                    else s.at(i) = '0';
                }
                cout<<"New number is : ";
                for (int i = 0; i < s.length(); i++) {
                    cout<<s.at(i);
                }
                cout<<"\n";
            }
            else cout<<"Entered number is not binary , 1's complement not possible!!"<<endl;
        }
        int chk_binRet(void) {
            int flag=0;
            for (int i = 0; i < s.length(); i++) {
                if(s.at(i)=='0' || s.at(i)=='1') flag = 1;
                else {flag = 0; break;}
            }
            if(flag) return 1; 
            else return 0; 
        }
};

void binary :: read(void) {
    cout<<"Enter a binary number : ";
    cin>>s;
}
int binary :: chk_bin(void) {
    int flag=0;
    for (int i = 0; i < s.length(); i++) {
        if(s.at(i)=='0' || s.at(i)=='1') flag = 1;
        else {flag = 0; break;}
    }
    if(flag) cout<<"Binary number!!"<<endl;
    else cout<<"Incorrect Binary Format!!"<<endl; 
}

int main() {
    
    binary b;
    b.read();
    // b.chk_bin();   // not works in PRIVATE mode
    b.comp();

    return 0;
}
/*
OUTPUT - When nested or b.chk_bin(); in main fn.

Enter a binary number : 10101011111
Binary number!!
Entered number is binary , taking 1's complement!!
New number is : 01010100000


OUTPUT - When b.chk_bin(); commented out

Enter a binary number : 10101011111
Entered number is binary , taking 1's complement!!
New number is : 01010100000
*/
