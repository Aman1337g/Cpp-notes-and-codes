/*
                            ---------------
                            |   Student   |
                            ---------------
                                   |
                ---------<------------------->-----------
                |                                       |
               Test                                   Sports
                |                                       |
                |                                       |
                |-------->---------------------<--------|
                                   |
                                Result
*/
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;
    string name;

public:
    void set_details(int a, string n)
    {
        roll_number = a;
        name = n;
    }
    void print_details()
    {
        cout << "Roll no. : " << roll_number << endl
             << "Name : " << name << endl;
    }
};
class Test : virtual public Student
{ // could also write "public virtual Student"
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "\nTest Marks :\n"
             << "Math : " << maths << endl
             << "Physics : " << physics << endl;
    }
};
class Sports : virtual public Student
{ // could also write "public virtual Student"
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "\nSports Score :\n"
             << "Sports : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_details();
        print_marks();
        print_score();
        cout << "\nYour total score is : " << total << endl;
    }
};

int main()
{
    Result re;
    re.set_details(4, "Aditya Bikram Jena");
    re.set_marks(78, 90);
    re.set_score(95.5);
    re.display();

    return 0;
}
/*
OUTPUT

Roll no. : 4
Name : Aditya Bikram Jena

Test Marks :
Math : 78
Physics : 90

Sports Score :
Sports : 95.5

Your total score is : 263.5

*/