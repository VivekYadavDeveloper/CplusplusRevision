
/*Whats Vector ?
Vectors are sequence containers representing arrays that can change in size.

Just like arrays, vectors use contiguous storage locations for their elements,
which means that their elements can also be accessed
using offsets on regular pointers to its elements,
and just as efficiently as in arrays. But unlike
arrays, their size can change dynamically, with their
storage being handled automatically by the container.
*/
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter The Size Of Your Vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter An Element To Add To This Vector: " << endl;
        cin >> element;

        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 100, 566);
    display(vec1);

    return 0;
}