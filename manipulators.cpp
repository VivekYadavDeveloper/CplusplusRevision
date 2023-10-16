#include <iostream>
#include<iomanip>
using namespace std;
int main()
{

    /*Manuepulter in C++*/

    int a = 4, b = 43, c = 1234;

    cout << "The Value of a without setw is:"
         << a << endl;
    cout << "The Value of a without setw is:"
         << b << endl;
    cout << "The Value of a without setw is:"
         << c << endl;

    /*Manuplation with setw*/
    cout << "The Value of a with setw is:  "
         << setw(4) << a << endl;
    cout << "The Value of a with setw is:  "
         << setw(4) << b << endl;
    cout << "The Value of a with setw is:  "
         << setw(4) << c << endl;
    return 0;
}