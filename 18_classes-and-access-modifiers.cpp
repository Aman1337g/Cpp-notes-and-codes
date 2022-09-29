#include<iostream>
using namespace std;

// class Employee
// {
// private:
//     int a, b ,c;
// public:
//     int d, e;
//     void setData(int a1, int b1, int c1); // Declaration
//     void showData() {
//         cout<<"The value of a : "<<a<<"\nThe value of b : "<<b<<"\nThe value of c : "<<c;
//         cout<<"\nThe value of d : "<<d<<"\nThe value of e : "<<e;
//     }
// };

// void Employee::setData(int a1, int b1, int c1) {
//     a = a1; b = b1; c = c1;
// }

// int main() {
//     Employee aman;
//     aman.d = 89, aman.e = 28;
//     // aman.a = 67;    ---> Error as 'a' is private
//     aman.setData(1,2,4);
//     aman.showData();
//     return 0;
// }

// Animal class 
class Animal {
    private: 
        string name;
    public: 
        int legs;
        int eyes;
        int hands;
        string sound;
        void setName(string namae);
        void setParam() {
            cout<<"Enter no. of legs : "; cin>>legs;
            cout<<"Enter no. of eyes : "; cin>>eyes;
            cout<<"Enter no. of hands : "; cin>>hands;
            cout<<"Enter sound : "; cin>>sound;
        }
        void showData();
};

void Animal::setName(string nam) {
    name = nam;
}
void Animal::showData() {
    cout<<"Name : "<<name<<"\nLegs : "<<legs<<"\nEyes : "<<eyes<<"\nHands : "<<hands<<"\nSound : "<<sound;
    cout<<"\n\n";
}

int main() {
    Animal cat, dog;
    Animal human;

    cout<<"Enter for cat :\n";
    cat.setName("CAT");
    cat.setParam();
    cout<<"\n";

    cout<<"Enter for dog :\n";
    dog.setName("DOG");
    dog.setParam();
    cout<<"\n";

    cout<<"Enter for human :\n";
    human.setName("HUMAN");
    human.setParam();
    cout<<"\n";

    cat.showData();
    dog.showData();
    human.showData();
    
    return 0;
}

/*
OUTPUT 

Enter for cat :
Enter no. of legs : 4
Enter no. of eyes : 2
Enter no. of hands : 2
Enter sound : MEOW

Enter for dog :
Enter no. of legs : 4
Enter no. of eyes : 4
Enter no. of hands : 4
Enter sound : BHAU

Enter for human :
Enter no. of legs : 2
Enter no. of eyes : 2
Enter no. of hands : 2
Enter sound : HELLO

Name : CAT
Legs : 4
Eyes : 2
Hands : 2
Sound : MEOW

Name : DOG
Legs : 4
Eyes : 4
Hands : 4
Sound : BHAU

Name : HUMAN
Legs : 2
Eyes : 2
Hands : 2
Sound : HELLO


*/