#include <iostream>
using namespace std;

int main()
{

    int studentRoll[5] = {22, 32, 12, 18, 20};

    for (int i = 0; i < 5; i++)
    {
        cout << "BCA Students Name   " << i << "  is " << studentRoll[i] << endl;
    }

    return 0;
}