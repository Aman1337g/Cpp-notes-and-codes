#include<iostream>
using namespace std;

// Ambiguity 1
class Base1 {
    private:
        
    public:
        void greet() {
            cout<<"How are you ?"<<endl;
        }
};
class Base2 {
    private:
        
    public:
        void greet() {
            cout<<"Kaise ho ?"<<endl;
        }
};
class Derived : public Base1, public Base2 {
    public:
        void greet() {
            Base2 :: greet();   // Ambiguity solved
        }
};

// Ambiguity 2
class B {
    public:
        void say() {
            cout<<"Hello World!!"<<endl;    }
};
// Class D's new "say()" method will override Class B's "say()" method
class D : public B {
    public:
        void say() {
            cout<<"Hello my beautiful people!!"<<endl;  // Ambiguity resolved by making D's own "say()" method
        }
};

int main() {

    // Ambiguity 1
    cout<<"------------Ambiguity 1------------"<<endl;
    Base1 objBase1;
    objBase1.greet();

    Base2 objBase2;
    objBase2.greet();

    Derived obj;
    obj.greet();
    cout<<"------------------------------------"<<endl;

    cout<<"\n------------Ambiguity 2------------"<<endl;
    B obj1;
    obj1.say();
    D obj2;
    obj2.say();
    cout<<"------------------------------------"<<endl;

    return 0;
}
/*
OUTPUT

------------Ambiguity 1------------
How are you ?
Kaise ho ?
Kaise ho ?
------------------------------------

------------Ambiguity 2------------
Hello World!!
Hello my beautiful people!!
------------------------------------

*/