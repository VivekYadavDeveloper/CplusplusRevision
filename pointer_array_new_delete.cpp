#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The Value Of a Is: " << *(ptr) << endl;

    /*
    New Operator
    int *p = new int(40);

    */

    float *p = new float(40.78);
    cout << "The Value At Address P Is: " << *(p) << endl;
    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 30;
    arr[2] = 20;
    delete[] arr;
    cout << "The Value Of arr[0] Is: " << arr[0] << endl;
    cout << "The Value Of arr[0] Is: " << arr[1] << endl;
    cout << "The Value Of arr[0] Is: " << arr[2] << endl;

    /*Delete Operator*/

    return 0;
}
