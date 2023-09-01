/*

*/
#include <iostream>
using namespace std;

class Repeat
{
private:
    int a;

public:
    void setData()
    {
        cout << "Enter number : ";
        cin >> a;
    }
    void rep()
    {
        while (a)
        {
            cout << "WELL DONE" << endl;
            a--;
        }
    }
};

int main()
{
    Repeat ob;
    ob.setData();
    ob.rep();
    return 0;
}
/*
OUTPUT

Enter number : 5
WELL DONE
WELL DONE
WELL DONE
WELL DONE
WELL DONE

*/