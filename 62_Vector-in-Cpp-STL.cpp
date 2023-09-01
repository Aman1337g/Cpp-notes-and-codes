#include <iostream>
using namespace std;
#include <vector>

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Ways to create a vector

    vector<int> vec0; // zero length integer vector
    display(vec0);

    vector<int> vec1; // user-defined length
    display(vec1);
    int element, size;
    cout << "Enter size of the vector : ";
    cin >> size;
    cout << "Enter vector : ";
    for (int i = 0; i < size; i++)
    {
        // printf("Enter element to add to this vector : ");
        cin >> element;
        vec1.push_back(element);
    }

    cout << "\nEntered vector : ";
    display(vec1);

    cout << "\nAfter popping out last element :\n";
    vec1.pop_back();
    display(vec1);

    cout << "\nAfter inserting at beginning :\n";
    vector<int>::iterator itera = vec1.begin();
    vec1.insert(itera, 533);
    display(vec1);

    cout << "\nAfter inserting before second element :\n";
    // vector<int>::iterator itera = vec1.begin();
    vec1.insert(itera + 1, 53);
    display(vec1);

    cout << "\nAfter inserting 10 copies of '0' before 3rd element :\n";
    vec1.insert(itera + 2, 10, 0);
    display(vec1);

    cout << endl;
    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('a');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);

    vector<int> v(6, 33); // 6-element vector of 3s
    display(v);

    return 0;
}
/*
OUTPUT

Displaying vector :
Displaying vector :
Enter size of the vector : 3
Enter vector : 1 2 3

Entered vector : Displaying vector : 1 2 3

After popping out last element :
Displaying vector : 1 2

After inserting at beginning :
Displaying vector : 533 1 2

After inserting before second element :
Displaying vector : 533 53 1 2

After inserting 10 copies of '0' before 3rd element :
Displaying vector : 533 53 0 0 0 0 0 0 0 0 0 0 1 2

Displaying vector :     a
Displaying vector :     a
Displaying vector : 33 33 33 33 33 33

*/