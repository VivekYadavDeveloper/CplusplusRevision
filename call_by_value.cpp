#include <iostream>
using namespace std;

int sum(int a, int b)
{

    int c = a + b;
    return c;
}

void swapPointer(int *a, int *b)
{
    int temp = *a; /* Temp  a   b
                      3    3   2
                      3    2   2
                      3    2   3*/
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 3, b = 2;
    cout << "The Value Of A Is: " << a << " And The Value Of B is: " << b << endl;

    swapPointer(&a, &b);

    cout << "The Value Of A Is: " << a << " And The Value Of B is: " << b << endl;

    return 0;
}