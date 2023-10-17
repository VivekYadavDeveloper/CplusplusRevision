#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
};
int main()
{
    /*What is Function?
    A Function is a block of code which only runs when its called.
    You can pass the parameter into funtion.

    */

    int num1, num2;

    cout << "Enter The First Number You Want To Add: " << endl;
    cin >> num1;
    cout << "Enter The Second Number You Want To Add: " << endl;
    cin >> num2;

    cout << "The Sum Of :" << sum(num1, num2);
    return 0;
}