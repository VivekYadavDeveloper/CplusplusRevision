#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {

        cout << "Enter The ID : " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID Of This Employee Is : " << id << "  And The Is Employee Number : " << count << endl;
    }
};
int count;

int Employee::count;
int main()
{

    cout << "STATIC DATA MEMBER METHOD" << endl;

    Employee Ankit, Saurabh, Pradumyna;
    Ankit.setData();
    Ankit.getData();

    Saurabh.setData();
    Saurabh.getData();

    Pradumyna.setData();
    Pradumyna.getData();

    return 0;
}