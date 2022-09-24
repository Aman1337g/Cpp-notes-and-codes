#include<iostream>         // <------ tells the compiler to include the already present header file for input, output ,...etc operations
using namespace std;
int main() {               // <------ main function (entry point) , int is the return type of this function, square brackets after main => "main()" depicts that it is a function
    cout<<"Hello World";   // <------ use semicolons(;) to end statements
    return 0;              // <------ indicates successful termination of program
}

/* In the header file "iostream" we imported, there is 'cout' function in the standard namespace  
so we writing "using namespace std;" or else we can write "std::cout" , (::) => scope resolution operator
*/

/* 
Output

Hello World
*/