// Using iterator array.

#include <iostream>
#include <iterator>
#include <array>
using namespace std;

int main()
{
    array <int, 5> arr = {78,96,35,15,25};
    array <int, 5> :: iterator itr;

    cout << "the elements is: " << endl;
    for(itr = arr.begin(); itr != arr.end(); itr++)
    {
        cout << *itr << " ";
    }

    // cout << "the elements in reverse: " << endl;
    // for(itr = arr.crbegin(); itr !=arr.crend(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    // cout << "the elements in are: " << endl;
    // for(itr = arr.cbegin(); itr != arr.cend(); itr++)
    // {
    //     cout << *itr << " ";
    // }

    return 0;
}