#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int arr[] = {1, 24, 99, 2, 34, 53, 77};
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << "Count Arrey: " << arr[i] << endl;
        /* code */
    }

    return 0;
}