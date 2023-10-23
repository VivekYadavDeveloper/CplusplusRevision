#include <bits/stdc++.h>
using namespace std;

class Simpled
{
protected:
    int num1, num2;
    int sum, diff, prod;
    float div;

public:
    void setInfo_Sim(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void process_SimSn(void)
    {

        sum = num1 + num2;
        diff = num1 - num2;
        prod = num1 * num2;
        div = (float)num1 / num2;
    }

    void display_SimSn(void)
    {

        cout << "The Addition Of Num1: " << num1 << " And " << num2 << " Is: " << sum << endl;
        cout << "The Subtraction Of Num1: " << num1 << " And " << num2 << " Is: " << diff << endl;
        cout << "The Multification Of Num1: " << num1 << " And " << num2 << " Is: " << prod << endl;
        cout << "The Division Of Num1: " << num1 << " And " << num2 << " Is: " << div << endl;
    }
};

class scienctific_calc
{
protected:
    int num3, num4;
    float sqr3, sqr4;
    float cub3, cub4;
    float sqrt3, sqrt4;
    float cbrt3, cbrt4;

public:
    void setInfo_Sci(int a, int b)
    {
        num3 = a;
        num4 = b;
    }
    void process_Sci(void)
    {

        sqr3 = num3 * num3;
        sqr4 = num4 * num4;
        cub3 = num3 * num3 * num3;
        cub4 = num4 * num4 * num4;
        sqrt3 = sqrt(num3);
        sqrt4 = sqrt(num4);
        cbrt3 = cbrt(num3);
        cbrt4 = cbrt(num4);
    }

    void display_Sci(void)
    {

        cout << "Square Of: " << num3 << " Is:  " << sqr3 << endl;
        cout << "Square Of: " << num4 << "Is: " << sqr4 << endl;
        cout << "Cube Of: " << num3 << " Is: " << cub3 << endl;
        cout << "Cube Of: " << num4 << " Is: " << cub4 << endl;
        cout << "Square Root Of: " << num3 << " Is: " << sqrt3 << endl;
        cout << "Square Root Of: " << num4 << " Is: " << sqrt4 << endl;
        cout << "Cube Root Of: " << num3 << " Is: " << cbrt3 << endl;
        cout << "Cube Root Of: " << num4 << " Is: " << cbrt4 << endl;
    }
};

class Hybrid : public Simpled, public scienctific_calc
{

public:
    void set(int a, int b)
    {
        setInfo_Sim(a, b);
        setInfo_Sci(a, b);
    }
    void process(void)
    {
        process_SimSn();
        process_Sci();
    }
    void display(void)
    {
        display_SimSn();
        display_Sci();
    }
};

int main()
{

    int a, b;
    cout << "Enter The First Number: " << endl;

    cin >> a;
    cout << "Enter The Second Number: " << endl;
    cin >> b;

    Hybrid object;
    object.set(a, b);
    object.process();
    object.display();
    return 0;
}