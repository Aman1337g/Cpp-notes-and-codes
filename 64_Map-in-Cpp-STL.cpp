#include <iostream>
using namespace std;
#include <map>
#include <string>

int main()
{
    // Map is an associative array
    map<string, int> marksMap;
    marksMap["Vivek Mishra"] = 69;
    marksMap["Ayushman Nayak"] = 89;
    marksMap["Aman Kumar Gupta"] = 100;
    marksMap["Roshan Dash"] = 100;

    // using insert method
    marksMap.insert({{"Mridul Tripathi", 90}, {"Jyotideep Acharjee", 98}});

    map<string, int>::iterator itr;
    cout << "Printing Marks\n----------------\n";
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " : " << (*itr).second << endl;
    }

    // trying some other methods
    cout << "\nThe size of map is : " << marksMap.size() << endl;
    cout << "The empty method return value : " << marksMap.empty() << endl;
    cout << "The max. size of map : " << marksMap.max_size() << endl;

    return 0;
}
/*
OUTPUT

Printing Marks
----------------
Aman Kumar Gupta : 100
Ayushman Nayak : 89
Jyotideep Acharjee : 98
Mridul Tripathi : 90
Roshan Dash : 100
Vivek Mishra : 69

The size of map is : 6
The empty method return value : 0
The max. size of map : 97612893

*/