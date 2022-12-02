#include <iostream>
using namespace std;
int count = 0;
template <class T>
class Aman
{
public:
    T data;
    Aman(T a)
    {
        data = a;
        count++;
    }
    // void display()
    // {
    //     cout << "a" << count << " : " << data << endl;
    // }
    void display();
};

template <class T>
void Aman<T>::display()
{
    cout << "a" << count << " : " << data << endl;
}

// func
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatised func()1 " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatised func()2 " << a << endl;
}

int main()
{
    Aman<float> a1(2.34);
    // cout << "a1 : " << a1.data << endl;
    a1.display();

    Aman<int> a2(32);
    // cout << "a2 : " << a2.data << endl;
    a2.display();

    Aman<char> a3('a');
    // cout << "a4 : " << a4.data << endl;
    a3.display();

    Aman<string> a4("Aman Kumar Gupta");
    // cout << "a4 : " << a4.data << endl;
    a4.display();

    func(3); // Exact match takes the highest priority
    func(3.23);
    func1(3);
    return 0;
}
/*
OUTPUT

a1 : 2.34
a2 : 32
a3 : a
a4 : Aman Kumar Gupta
I am first func() 3
I am templatised func()1 3.23
I am templatised func()2 3

*/