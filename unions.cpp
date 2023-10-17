#include <iostream>
using namespace std;

union money
{
    /* What is Unions?

    Unions is Provide only One Data To The User at a Time.
    Because Of Shareing Memory.
     */

    int rice;
    char favCar;
    float pounds;
};

int main()
{

    union money m1;
    m1.rice = 42;
    m1.favCar = 'M';

    cout << m1.rice << endl;
    return 0;
}