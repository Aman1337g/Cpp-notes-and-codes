#include<iostream>
using namespace std;
int main() {
    
    // priting nos. from 0 to 9
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    // break statement
    for (int i = 0; i < 10; i++)
    {
        if(i==5) break;
        cout<<i<<endl;
    }
    cout<<endl;
    // continue statement
    for (int i = 0; i < 10; i++)
    {
        if(i==2 || i==4 || i==6) continue;
        cout<<i<<endl;
    }
    
    return 0;
}
/*
OUTPUT

0
1
2
3
4
5
6
7
8
9

0
1
2
3
4

0
1
3
5
7
8
9
*/
