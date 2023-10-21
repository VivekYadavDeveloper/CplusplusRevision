#include <iostream>
using namespace std;

class Student
{
    int rNum;
    int maskr;

public:
    void setId(void)
    {

        cout << "Enter The Roll No.  " << endl;
        cin >> rNum;
    }
    void getID(void)
    {

        cout << "The Roll Number of This Student Is " << rNum << endl;
    }
};

int main()
{

    cout << "Array Of Object Passign Object Function" << endl;

    Student Vivek, Ankit, Praduymna, Jaivender;

    Vivek.setId();
    Vivek.getID();

    return 0;
}