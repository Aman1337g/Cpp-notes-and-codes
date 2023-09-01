#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    cout<<"Enter n1 and n2 : \n"; // '<<' is called Insertion operator (inserting something onto display)
    cin>>n1>>n2; // '>>' is called Extraction operator (extracting variable value from user)
    cout<<"Sum of "<<n1<<" and "<<n2<<" is : "<<n1+n2;
    return 0;
}

/*
OUTPUT

Enter n1 and n2 : 
45 5
Sum of 45 and 5 is : 50
*/