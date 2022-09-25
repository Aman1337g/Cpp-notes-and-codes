#include<iostream>
using namespace std;
int main() {
    int i;
    int marks[] = {893,23,32,22};
    // OR int marks[4] = {893,23,32,22};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // // We can change array value also
    // marks[2] = 78;
    // cout<<marks[2]<<endl;

    // Printing contents of array using loop
    for (i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    } i=0; cout<<endl;
    while (i != 4)
    {
        cout<<marks[i]<<endl;
        i++;
    } i=0; cout<<endl;
    do
    {
        cout<<marks[i]<<endl;
        i++;
    } while (i!=4);
    cout<<endl;
    // Pointer and Arrays
    // in arrays , name of array => address of first block

    int* p = marks;
    cout<<"The value of *p is : "<<*p<<endl;
    cout<<"The value of *(p+1) is : "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is : "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is : "<<*(p+3)<<endl;

    return 0;
}

/*
OUTPUT

893
23
32
22

893
23
32
22

893
23
32
22

The value of *p is : 893
The value of *(p+1) is : 23
The value of *(p+2) is : 32
The value of *(p+3) is : 22
*/