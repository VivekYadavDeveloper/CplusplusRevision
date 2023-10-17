#include <iostream>
using namespace std;

/*Function Prototyping
type function-name (arguments)
*/

int sum(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter The First Number You Want To Add: " << endl;
    cin >> num1;
    cout << "Enter The Second Number You Want To Add: " << endl;
    cin >> num2;

    cout << "The Sum Of :" << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
};