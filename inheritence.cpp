#include <iostream>
#include <string>
using namespace std;

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