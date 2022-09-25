#include<iostream>
using namespace std;

int add(int a , int b) {
    return a+b;
}

void swap(int a, int b) {    //  temp    a    b
    int temp = a;            //   24     24   90 
    a = b;                   //   24     90   90  
    b = temp;                //   24     90   24  (Swapped) 
} // This will not swap nos. as actual values are copied to a and b , only a nd b are swapped


// Call by reference using pointers
void swapPointer(int* a , int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference using reference variables
void swapReference(int &a , int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// int & swapReference1(int &a , int &b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int add(int, int); 
int main() {
    int x = 24 , y = 90; 
    cout<<"Sum of x and y is : "<<add(x,y)<<endl<<endl;
    cout<<"Before Swapping:\nx = "<<x<<", y = "<<y<<endl;
    // swap(x, y); // This will not swap nos. as actual values are copied to a and b , only a nd b are swapped
    // swapPointer(&x, &y);  // Swap using pointers
    swapReference(x, y);  // Swap using reference variables
    // swapReference1(x, y) = 466;  // Changes value of x to 466 using another reference of a function returning a (&a=x)
    cout<<"After Swapping:\nx = "<<x<<", y = "<<y<<endl;

    return 0;
}
/*
OUTPUT

Sum of x and y is : 114

Before Swapping:
x = 24, y = 90
After Swapping:
x = 90, y = 24
*/