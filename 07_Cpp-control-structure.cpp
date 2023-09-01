#include<iostream>
using namespace std;
int main() {
    int a , b;
    char ch;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    // cout<<"Enter operator(+,-)? ";
    // cin>>ch;

    // // Selection control structure - if..else if..else
    // if(ch == '+') {
    //     cout<<"Sum of a and b is : "<<a+b;
    // }
    // else if(ch == '-') {
    //     cout<<"Difference of a and b is : "<<a-b;
    // }
    // else cout<<"Multiplication of a and b is : "<<a*b;

    // Selection control structure - switch..case
    cout<<"Enter operator? ";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"Sum of a and b is : "<<a+b;
        break;
    case '-':
        cout<<"Difference of a and b is : "<<a-b;
        break;
    case '*':
        cout<<"Multiplication of a and b is : "<<a*b;
        break;
    case '/':
        cout<<"Division of a and b is : "<<a/b;
        break;
    case '%':
        cout<<"Remainder of a/b is : "<<a%b;
        break;
    default:
        cout<<"Invalid Operator!!";
        break;
    }

    return 0;
}

/*
OUTPUT

Enter a and b : 43 5
Enter operator? %
Remainder of a/b is : 3
*/