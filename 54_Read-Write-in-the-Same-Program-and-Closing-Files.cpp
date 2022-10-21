/*
    File I/O [Reading and Writing to a File]

    - 3 useful classes ( comes from header file <fstream> )
        1. fstreambase
        2. ifstream -> Derived from fstreambase
        3. ofstream -> Derived from fstreambase

    - Read Operation
    ifstream in("this.txt");
    string st;
    in >> st;   // just like cin
    cout << st;

    - Write Operation
    ofstream out("this.txt");
    string st = "Jena Bhai Ka Jalwa";
    out << st; // writes to "this.txt"
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // connecting our file with hout stream
    ofstream aout("sample54.txt"); // you can write anything in place of aout

    // creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name : ";
    // cin >> name;
    getline(cin, name);

    // Writing a string to the file
    aout << "My name is " + name;

    aout.close();

    ifstream ain("sample54.txt");
    string st2;
    getline(ain, st2); // reads line by line
    // ain >> st2;  // does not read after a space
    cout << "Content of the file is : " << st2;

    ain.close();

    return 0;
}
/*
OUTPUT

Enter your name : Aman Kumar Gupta
Content of the file is : My name is Aman Kumar Gupta
*/