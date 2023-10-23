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

class GrandCar : public Car
{
public:
    string tyers = "55'55";
};
int main()
{

    GrandCar myCarList;
    myCarList.tyers;

    cout << "Car Brand Name Is: " << myCarList.Brand + " Car Model Name Is " + myCarList.Model + " Car Tyers Thikness " + myCarList.tyers << endl;
    return 0;
}