#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        /* code */

        cout << "You Are 18: " << endl;
        break;
    case 19:
        /* code */

        cout << "You Are 19: " << endl;
        break;
    case 22:
        /* code */

        cout << "You Are 22: " << endl;
        break;
    case 5:
        /* code */

        cout << "You Are 5: " << endl;
        break;

    default:

        cout << "No Spacial Cases: " << endl;
        break;
    }

    return 0;
}