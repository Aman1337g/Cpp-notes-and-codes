#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n, i;
    cout<<"Enter number : ";
    cin>>n;
    
    // printing 1 to n using for loop
    i=1;
    for(i = 1; i<=n; i++) {
        cout<<i<<endl;
    }
    cout<<endl;
    // printing 1 to n using while loop
    i=1;
    while(i != n+1) {
        cout<<i<<endl;
        i++;
    }
    cout<<endl;
    // printing 1 to n using do-while loop
    i=1;
    do {
        cout<<i<<endl;
        i++;
    }while(i != n+1);
    cout<<endl;
    // multiplication table of n using do-while loop
    i=1;
    do {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i!=11);

    return 0;
}
/*
OUTPUT

Enter number : 7
1
2
3
4
5
6
7

1
2
3
4
5
6
7

1
2
3
4
5
6
7

7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
*/