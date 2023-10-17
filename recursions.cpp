#include <iostream>
using namespace std;

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

    /*What is Recursion?
     Recursion is the technique of making a function call itself.
     This technique provides a way to break complicated problems down into simple problems
     */

    /*Factorial
    7! = 7*6*5*4*3*2*1 =5040
    */
    /*Factorial Calculation
    factorial(3) = 3*factorial(2);
    factorial(3) = 3*2*factorial(1);
    factorial(3) = 3*2*1;
    factorial(3) = 6;

    */

    int a;

    cout << "Enter Number: " << endl;
    cin >> a;
    cout << "The Factorial of " << a << " is: " << factorial(a) << endl;
    return 0;
}