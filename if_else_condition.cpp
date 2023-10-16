#include <iostream>
using namespace std;
int main()
{
    int age = 0;
    cout << "Tell Me Your Age?: " << endl;

    cin >> age;
    if (age < 18)
    {

        cout << "You Can Not Came In Party: " << endl;
    }
    else if (age == 18)
    {
        cout << "Your are a kid and you can get a kid pass To Party:   " << endl;
    }
    else
    {
        cout << "You Can Come into the Party" << endl;
    }

    return 0;
}