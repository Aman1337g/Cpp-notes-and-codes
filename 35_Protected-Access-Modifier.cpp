#include<iostream>
using namespace std;

class Base {
    protected: int a;
    private: int b;
    public:
};
/*
    For a protected member : 
                          Public derivation       Private Derivation      Protected Derivation
1.    Private members       Not inherited           Not inherited           Not inherited
2.    Protected members     protected               private                 protected
3.    Public members        public                  private                 protected
*/
class Derived : protected Base {
};

int main() {
    Base b;
    Derived d;
    // cout<<d.a;   // will not work since "a" is protected in both base as well as derived class
    return 0;
}