#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + (n - 1);
    
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int a;

    cout << "Enter Number: " << endl;
    cin >> a;
    cout << "The Term in Fibonacci Sequence At Posiotion of " << a << " is: " << factorial(a) << endl;
    return 0;
}