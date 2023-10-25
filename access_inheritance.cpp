#include <iostream>
using namespace std;

/*Base Class*/
class Employee
{
protected:
    int Salary;
};
/*Derive Class*/

class Developer : public Employee
{

public:
    int bonus;

    void setSalary(int s)
    {

        Salary = s;
    }

    int getSalary()
    {
        return Salary;
    }

    int TotalSalary()
    {

        return Salary + bonus;
    }
};

// class TotalSalary: protected Employee,public Developer{

// int TotalSalary = setSalary*bouns;
// }
int main()
{

    Developer dev;
    dev.setSalary(30000);
    dev.bonus = 5000;
    dev.getSalary();
    dev.TotalSalary();

    cout << "Salary Of Employee Is: " << dev.getSalary() << endl;
    cout << "Bouns Of This Month Is: " << dev.bonus << endl;
    cout << "Total Salary Of The Employee Is: " << dev.TotalSalary() << endl;

    return 0;
}