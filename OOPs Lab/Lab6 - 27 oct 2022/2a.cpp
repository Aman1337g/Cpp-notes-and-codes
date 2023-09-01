#include <iostream>
using namespace std;

class Student
{
protected:
    string stu_id;
    float stu_marks;

public:
    Student()
    {
        cout << "Enter ID : ";
        cin >> stu_id;
        cout << "Enter marks : ";
        cin >> stu_marks;
    }
    void display()
    {
        cout << "Entered ID : " << stu_id << endl;
        cout << "Entered marks : " << stu_marks << endl;
        cout << "\n";
    }
};
int main()
{
    int n, i;
    cout << "Enter no. of students : ";
    cin >> n;
    Student stu[n];

    cout << "\nDisplaying Details : \n\n";
    for (i = 0; i < n; i++)
    {
        stu[i].display();
    }
}
