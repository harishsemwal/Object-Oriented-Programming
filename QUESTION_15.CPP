// Create a vector and traverse the vector using for-loop, for-each loop and iterator.

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    int num, val;
    vector<int> vt;
    vector<int>::iterator itr;

    cout << "Enter The number of element: " << endl;
    cin >> num;

    cout << "Enter The " << num << " Elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> val;
        vt.push_back(val);
    }

    cout << "using iterator the element is: " << endl;
    for (itr = vt.begin(); itr < vt.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl << "using for loop the elements is: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << vt[i] << " ";
    }

    return 0;
}