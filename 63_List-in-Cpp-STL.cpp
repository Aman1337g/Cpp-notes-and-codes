#include <iostream>
using namespace std;
#include <list>

template <class T>
void display(list<T> &l)
{
    cout << "Displaying list :\n";
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length
    list1.push_back(99);
    list1.push_back(5);
    list1.push_back(54);
    list1.push_back(22);
    list1.push_back(1);
    list1.push_back(46);

    cout << "FOR LIST1\n---------\n";
    display(list1);
    cout << "After removing element from last :\n";
    list1.pop_back();
    display(list1);
    cout << "After removing element from begin :\n";
    list1.pop_front();
    display(list1);
    cout << "After removing '12' : \n";
    list1.remove(12);
    display(list1);
    cout << "After sorting the list :\n";
    list1.sort();
    display(list1);

    cout << "\nFOR LIST2\n---------\n";
    list<int> list2(3); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();

    *iter = 62;
    iter++;
    *iter = 100;
    iter++;
    *iter = 4;
    iter++;

    display(list2);

    cout << "\nMerging list1 and list2 [SORTED]\n";
    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);

    cout << "\nAfter reversing list1\n";
    list1.reverse();
    display(list1);

    list<int> list3(4);
    list<int>::iterator itr;
    itr = list3.begin();
    *itr = 4;
    ++itr;
    *itr = 5;
    ++itr;
    *itr = 6;
    ++itr;
    *itr = 7;
    ++itr;

    cout << "\nBefore swapping list1 and list3\n------------------------------\n";
    cout << "List1\n";
    display(list1);
    cout << "List3\n";
    display(list3);
    cout << "\nAfter swapping list1 and list3\n------------------------------\n";
    list1.swap(list3);
    cout << "List1\n";
    display(list1);
    cout << "List3\n";
    display(list3);

    return 0;
}
/*
OUTPUT

FOR LIST1
---------
Displaying list :
99 5 54 22 1 46
After removing element from last :
Displaying list :
99 5 54 22 1
After removing element from begin :
Displaying list :
5 54 22 1
After removing '12' :
Displaying list :
5 54 22 1
After sorting the list :
Displaying list :
1 5 22 54

FOR LIST2
---------
Displaying list :
62 100 4

Merging list1 and list2 [SORTED]
Displaying list :
1 4 5 22 54 62 100

After reversing list1
Displaying list :
100 62 54 22 5 4 1

Before swapping list1 and list3
------------------------------
List1
Displaying list :
100 62 54 22 5 4 1
List3
Displaying list :
4 5 6 7

After swapping list1 and list3
------------------------------
List1
Displaying list :
4 5 6 7
List3
Displaying list :
100 62 54 22 5 4 1

*/