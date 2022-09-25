#include<iostream>
using namespace std;

// inline function (it's a request to the compiler)
// Expands the function wherever it is called, increases speed for short functions.
// not recommended to use inline in large , recursive , programs including loops or programs including static variables.
// as the increased memory usage outweights speed benefits.
inline int product(int a, int b) {
    return a*b;
}

float moneyReceived(int currentMoney, float factor = 1.04) {  // all default arguments must be at the extreme right
    return currentMoney*factor;
}

int main() {

    // int x, y;
    // cout<<"Enter x and y : ";
    // cin>>x>>y;
    // cout<<"Product of x and y is : "<<product(x, y)<<endl;
    

    // Default Arguments
    int money = 10000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP:\nIf you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year"<<endl;


    // constant argument . eg - 
    // void function (const int v = 0){
    //    v = v*2;	// Error, you cannot change the value of v.
    //    cout << v << endl;	
    // }
    return 0;
}
/*
OUTPUT

If you have 10000 Rs in your bank account, you will receive 10400 Rs after 1 year
For VIP:
If you have 10000 Rs in your bank account, you will receive 11000 Rs after 1 year
*/