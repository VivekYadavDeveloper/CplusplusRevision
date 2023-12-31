#include <iostream>
#include <string>
using namespace std;

/*
In C++, it is possible to inherit attributes and methods from one class to another. 
We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.
*/

/*Base Class*/
class Vehicle
{
public:
    string Brand = "Ford";
    void honk()
    {
        cout << "Tuuut, Tuut!" << endl;
    }
};

/*Derive Class*/

class Car : public Vehicle
{
public:
    string Model = "Mustang 65";
};
int main()
{

    Car myCar;
    myCar.honk();

    cout << myCar.Brand + "  " + myCar.Model << endl;
    return 0;
}