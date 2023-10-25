#include <iostream>
using namespace std;

class Student
{

protected:
    int RollNum;

public:
    void setNumber(int a)
    {

        RollNum = a;
    }
    void PrintNumber()
    {
        cout << "Your Roll No. Is: " << RollNum << endl;
    }
};

class Test : virtual public Student
{

protected:
    float math, physics;

public:
    void setMarks(float m1, float m2)
    {

        math = m1;
        physics = m2;
    }
    void displayMarks(void)
    {

        cout << "You Have Obtained: " << endl
             << "Physincs: " << physics << endl
             << "Maths: " << math << endl;
    }
};

class Sports : virtual public Student
{

protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void DisplayScore(void)
    {

        cout << "Your PT Score Is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void Display(void)
    {
        total = math + physics + score;

        PrintNumber();
        displayMarks();
        DisplayScore();
        cout << "Your Total Score Is: " << total << endl;
    }
};

int main()
{

    Result rslt;
    rslt.setNumber(63);
    rslt.setMarks(80.4, 75.6);
    rslt.setScore(10);
    rslt.Display();

    return 0;
}