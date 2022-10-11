#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;
class num {
    private:
    public:
        num() {     // Constructor
            count++;
            cout<<"Constructor is called for object "<<count<<endl;
        }
        ~num() {    // Destructor
            cout<<"Destructor is called for object "<<count<<endl;
            count--;
        }
};

int main() {
    cout<<"Inside main function\n";
    cout<<"Creating first object ob1"<<endl;

    num ob1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;     // Block level scope
        cout<<"Exiting this block"<<endl;   
    }   // Things made inside the block are destroyed when block ends
    cout<<"Back to main"<<endl;
    
    return 0;
}
/*
OUTPUT

Inside main function
Creating first object ob1
Constructor is called for object 1
Entering this block
Creating two more objects
Constructor is called for object 2
Constructor is called for object 3
Exiting this block
Destructor is called for object 3
Destructor is called for object 2
Back to main
Destructor is called for object 1

*/