#include <iostream>
using namespace std;

class Shop
{

    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }

    void displayPrice(void);
    void setPrice(void);
};

void Shop::setPrice(void)
{

    cout << "Enter ID Of Your Item " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter price Of Your Item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "THe Price of item With ID  " << itemID[i] << "Is" << itemPrice[i] << endl;
    }
}

int main()
{
    cout << "Memory Allocation" << endl;
    /* Memory Allocation*/

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}
