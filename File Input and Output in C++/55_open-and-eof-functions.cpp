#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    ofstream out;
    out.open("sample55.txt");
    cout << "Enter your name : ";
    getline(cin, name);
    out << "This is me " + name << ".\n";
    out << "This is alsi me.";
    out.close();

    ifstream in;
    string st2, st, st3;
    in.open("sample55.txt");

    // getline(in, st2);
    // cout << st2;
    // cout << "\n";
    // in >> st2 >> st;
    // cout << st2 << st;

    while (in.eof() == 0)
    {
        getline(in, st3);
        cout << st3 << endl;
    }

    in.close();

    return 0;
}
/*
OUTPUT

Enter your name : Aman Kumar Gupta
This is me Aman Kumar Gupta.
This is alsi me.

*/