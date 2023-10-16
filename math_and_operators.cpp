#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Following Are The Type Of Operators in C++" << endl;
    /* Arithmetic Operator*/
    cout << "The Value of a + b  " << a + b << endl;
    cout << "The Value of a - b  " << a - b << endl;
    cout << "The Value of a * b  " << a * b << endl;
    cout << "The Value of a % b  " << a % b << endl;
    cout << "The Value of a / b  " << a / b << endl;
    cout << "The Value of a ++   " << a++ << endl;
    cout << "The Value of a --   " << a-- << endl;
    cout << "The Value of ++ a   " << ++a << endl;
    cout << "The Value of ++ b   " << ++b << endl;
    cout << "The Value of b ++   " << b++ << endl;
    cout << "The Value of b --   " << b-- << endl;
    cout << endl;
    cout << endl;

    /* Comparition Operator*/
    cout << "Following Are The Type Of Comparision Operators in C++" << endl;

    cout << "The Value of a == b  " << (a == b) << endl;
    cout << "The Value of a != b  " << (a != b) << endl;
    cout << "The Value of a >= b  " << (a >= b) << endl;
    cout << "The Value of a <= b  " << (a <= b) << endl;
    cout << "The Value of a < b  " << (a == b) << endl;
    cout << "The Value of a > b  " << (a == b) << endl;
    cout << endl;
    cout << endl;

    cout << "Following Are The Type Of Logical Operators in C++" << endl;

    cout << "The Value of Logical Value  " << ((a == b) && (a > b)) << endl;
    cout << "The Value of Logical Value  " << ((a == b) || (a < b)) << endl;
    cout << "The Value of Logical Value  " << (!(a == b)) << endl;

    cout << endl;
    cout << endl;
    return 0;
}
