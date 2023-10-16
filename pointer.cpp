#include <iostream>
using namespace std;

int main()
{

    /*What Is Pointer?
    Pointer in a datatype which hold the address of Other datatypes;

    &----->Find(Get) Address of Operator
    *-----> (Store The Data in RAM Of System)Derefernces of Operator.
    */

    int a = 3;

    int *b = &a;
    /* &-----> Address of Operator*/
    cout << "The Address Of a      is: " << &a << endl;
    cout << "The Address Of a is: " << b << endl;

    /* *(Value at)-----> Derefernces of Operator*/
    cout << "The Value Of Address of b is: " << *b << endl;

    return 0;
}