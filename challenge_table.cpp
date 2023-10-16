#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Enter The Number Want To Generate Table:" << endl;
    cin >> a;

    for (int i = 1; i <= 10; i++)
    {

        cout << (a * i) << endl;
    }
}