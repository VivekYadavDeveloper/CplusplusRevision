#include <iostream>
using namespace std;

struct employeeInfo
{
    /* data */

    int eID;
    char favChar;
    float salary;
};

int main()
{
    /* What is Structure?
    Structure is User Define Datatype.

    Or Can Say --->

    Structures (also called structs) are a way to group several related variables into one place.
    Each variable in the structure is known as a member of the structure.Unlike
    an array, a structure can contain many different data types (int, string, bool, etc.).
    */
    struct employeeInfo vivek;
    vivek.eID = 2023;
    vivek.salary = 3700000;
    vivek.favChar = '$';
    cout << "Salary of Vivek: " << vivek.salary << endl;
    cout << "eID of Vivek: " << vivek.eID << endl;
    cout << "Fav of Vivek: " << vivek.favChar << endl;
    return 0;
}