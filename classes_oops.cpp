#include <iostream>
using namespace std;

class Student
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData()
    {

        cout << "The Value of a is: " << a << endl;
        cout << "The Value of b is: " << b << endl;
        cout << "The Value of c is: " << c << endl;
        cout << "The Value of d is: " << d << endl;
        cout << "The Value of e is: " << e << endl;
    }
};

void Student::setData(int a1, int b1, int c1)
{

    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    cout << "HELLO CLASSES " << endl;

    /*Whats Classes OOPS ?
    A class is a user-defined data type that we can use in our program, and it works as
    an object constructor, or a "blueprint" for creating objects.

    */

    Student ankit;
    ankit.d = 34;
    ankit.e = 89;
    ankit.setData(1, 2, 4);
    ankit.getData();

    return 0;
}