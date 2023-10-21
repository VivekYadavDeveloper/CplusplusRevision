#include <iostream>
using namespace std;

/*What is Constructur?

A Constructur a Spacial Type
Member Function With Same Name As Of The Class Name.
Constructors can also take parameters (just like regular functions),
which can be useful for setting initial values for attributes.
It's Automatically invoke When The Object Created.
*/
class Complex
{
    int a, b;

public:
    Complex(void);

    void printNumber()
    {

        cout << "Your Number Is :" << a << " + " << b << " i " << endl;
    }
};

Complex::Complex(void)
{

    a = 10;
    b = 0;
}
int main()
{
    cout << "Constructurs" << endl;

    Complex C;
    C.printNumber();

    return 0;
}