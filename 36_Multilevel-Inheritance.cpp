#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "Roll No. : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam ::get_marks()
{ // Upto here single inheritance
    cout << "Marks obtained in Mathematics : " << maths << endl;
    cout << "Marks obtained in Physics : " << physics << endl;
}

class Result : public Exam      // Now becomes a mutilevel inheritance
{
    float percentage;

public:
    void displayResult()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    Notes :
        If we are inheriting B from A and C from B : [A--->B--->C]
        1. A is the base class for B and B is the base class for C.
        2. A--->B--->C is called Inheritance Path.
    */
    Result aman;
    aman.set_roll_number(420);
    aman.set_marks(90, 98);
    aman.displayResult();

    return 0;
}
/*
OUTPUT

Roll No. : 420
Marks obtained in Mathematics : 90
Marks obtained in Physics : 98
Your percentage is : 94%
*/
