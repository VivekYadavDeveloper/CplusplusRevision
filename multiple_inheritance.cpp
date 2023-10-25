#include <iostream>
using namespace std;

/*A class can also be derived from more than one base class, using a comma-separated list:*/

/*Base Class 1*/
class Car1
{

public:
    string FirstCarName = "Lemborgini";
    void MyFirstCarName()
    {

        cout << "My Car Name Is: " << FirstCarName << endl;
    }
};

/*Base Class 2*/
class Car2
{
public:
    string SecondCarName = "GT Mustang";

    void MySecondCarName()
    {

        cout << "My Second Car Name Is: " << SecondCarName << endl;
    }
};

/*Derive Class*/

class CarCollections : public Car1, public Car2
{
};

int main()
{
    CarCollections collection;
    collection.MySecondCarName();
    collection.MyFirstCarName();
    // cout << collection.FirstCarName + " " + collection.SecondCarName << endl;
    return 0;
}