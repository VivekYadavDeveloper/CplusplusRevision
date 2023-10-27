#include <iostream>
#include <map>
using namespace std;

/*What is Map ?

Maps are associative containers that store elements
formed by a combination of a key value and a mapped value,
following a specific order.
In a map, the key values are generally used to sort and uniquely
identify the elements, while the mapped values store the content associated to this key. The types of
key and mapped value may differ, and are grouped together in member
type value_type, which is a pair type combining both:
1
typedef pair<const Key, T> value_type;


*/

int main()
{

    map<string, int> marksMap;
    marksMap["Vivek"] = 98;
    marksMap["Ankit"] = 99;
    marksMap["Joti"] = 97;

    map<string, int>::iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {

        cout << (*iter).first << " " << (*iter).second << "\n"
             << endl;
    }

    return 0;
}