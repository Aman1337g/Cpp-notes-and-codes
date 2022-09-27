#include<iostream>
using namespace std;

// // Factorial of a number
// int fact(int n) {
//     if(n<=1) return 1;
//     return n*fact(n-1);
// }

// int main() {

//     int n;
//     cout<<"Enter number : "; cin>>n;
//     cout<<"Factorial of "<<n<<" is : "<<fact(n)<<endl;
    
//     return 0;
// }
/*
working: 
fact(n) = n * fact(n-1)
fact(n) = n * (n-1) * fact(n-2)
fact(n) = n * (n-1) * (n-2) * fact(n-3)
upto ... fact(n) = n * (n-1) * (n-2) * (n-3) * .... * fact(1) = n!  [fact(1) = 1]
*/

// Fibonacci series upto n

int fibo(int n) {
    if(n<=0) return 0;
    else if(n==1) return 1;
    else return fibo(n-1) + fibo(n-2); 
}
int main() {

    int n;
    cout<<"Enter number : "; cin>>n;
    cout<<"Fibonacci series containing "<<n<<" terms is : ";
    for(int i=0; i<n; i++) cout<<fibo(i)<<" ";
    
    return 0;
}
/*
OUTPUT

Enter number : 10
Fibonacci series containing 10 terms is : 0 1 1 2 3 5 8 13 21 34
*/