/*Polymorphism means "many forms", and it occurs when we

have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class.
Polymorphism uses those methods to perform different tasks.
This allows us to perform a single action in different ways.


@Polymorphism --> 1. Run Time , 2. Compile Time

@Compile Time --> 1. Function Overloading, 2. Operatot Overloading

@Run Time --> Virtual Function.

*/

#include <iostream>
using namespace std;

class Animal
{
public:
    void animalSound()
    {

        cout << "The Animal Make A Sound: " << endl;
    }
};
class Horse : public Animal
{

public:
    void animalSound()
    {
        cout << " The Horse Say: Hrrrrr! Hrrrrrr!" << endl;
    }
};

class Dog : public Animal
{

public:
    void animalSound()
    {

        cout << "The Dog Say: Bow! Bow!" << endl;
    }
};

int main()
{

    Animal animal;
    Horse horse;
    Dog dog;

    animal.animalSound();
    horse.animalSound();
    dog.animalSound();

    return 0;
}