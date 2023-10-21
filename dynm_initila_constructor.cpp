#include <iostream>
using namespace std;

class BankDeposite
{

    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    BankDeposite(){};
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void show();
};

BankDeposite::BankDeposite(int p, int y, float r)
{

    principal = p;
    year = y;
    interestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */

        returnValue = returnValue * (1 + r);
    }
}

BankDeposite::BankDeposite(int p, int y, int r)
{

    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */

        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite::show()
{

    cout << "Principal Ammout Was:  " << principal << endl
         << "Return Value After: " << year << endl
         << "  Is: " << returnValue << endl;
}
int main()
{

    BankDeposite bd1, bd2, bd3;

    int p, y;
    float r;
    int R;

    cout << "Enter THe Value Of 'P' 'Y' And 'R'  :" << endl;

    cin >> p >> y >> r;

    bd1 = BankDeposite(p, y, r);
    bd1.show();
    return 0;
}
