#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i <= 10; i++)
    {

        cout << i << endl;
        if (i == 5)
        {
            /* code */
            continue;
            break;
        }
    }
    return 0;
}