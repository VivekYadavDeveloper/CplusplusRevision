#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter The Number: " << endl;
    cin >> num;
    int res = 1;
    for (int i = num; i > 1; i--)
    {
        res *= i;
    }

    cout << res;

    return 0;
}