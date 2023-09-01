#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    int i;
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    list<int> l;
    l.push_back(78);
    l.push_back(8);
    l.push_back(12);
    l.push_back(6);
    l.push_back(1);

    cout << "Before Sorting\nList : ";
    display(l);
    cout << "\n\nAfter Sorting\nList : ";
    l.sort();
    display(l);
}
