#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string st = "Hello Vivek";
    string st2;
    /*Opening File In Using Constructor And Writing*/
    ofstream out("samplefileIO.exe"); // Write Operation
    out << st;
    /*Opening File In Using Constructor And Writing*/
    ifstream in("samplefileIOF.exe"); // Write Operation
    getline(in, st2);

    cout << st2;
    return 0;
}