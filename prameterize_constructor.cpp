#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printNumber()
    {

        cout << "Your Number Is :" << a << " + " << b << " i " << endl;
    }
};

Complex::Complex(int x, int y)
{

    a = x;
    b = y;
}
int main()
{
    cout << "Parameterize Constructurs" << endl;

    Complex C(4, 6);
    C.printNumber();

    return 0;
}