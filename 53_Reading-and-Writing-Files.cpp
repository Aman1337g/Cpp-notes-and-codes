#include <iostream>
#include <fstream>
using namespace std;
/*
    The useful classes for working with files in C++ are :
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase

    In order to work with files in C++ , we have to open it. Primarily, there are 2 ways to open a file :
    1. Using the constructor
    2. Using the meber function "open()" of the class
*/

int main()
{
    string st = "Aman Bhai !!";
    // Opening files using constructor
    // ofstream out("sample56.txt"); // write operation
    // out << st;

    // Opening files using constructor and reading it
    string st2;
    ifstream read("sample53b.txt"); // read operation
    // read >> st2;
    getline(read, st2);
    // getline(read, st2);  // This will print the second line of file and so on...
    cout << st2;

    return 0;
}
/*
OUTPUT

This is a sample text file for 53_Reading-and-Writing-Files.cpp in our Cpp-notes-and-code repository.
*/