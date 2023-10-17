#include <iostream>
using namespace std;

int main()
{
    /*Pointer Arithmetic Formula

       Address New = Current Address + i*Size of (Datatype)

      ---> Address New Is P+i
      ---> Address Current is P.
       */

    int rollNo[4] = {12, 23, 34, 45};

    int *p = rollNo;
    cout << "The Roll Number of Student[0] *p : " << *p << endl;
    cout << "The Roll Number of Student[1] *p+1 : " << (*p + 1) << endl;
    cout << "The Roll Number of Student[2] *p+2 : " << (*p + 2) << endl;
    cout << "The Roll Number of Student[3] *p+3 : " << (*p + 3) << endl;
    return 0;
}