#include <iostream>
using namespace std;

int main()
{
    int num, res;

    cout << "Enter The number:  " << endl;
    cin >> num;

    try
    {
        if (num == 0)
        {
            throw 100;
        }

        if (0 == 0)
        {
            throw 'a';
        }
        res = 10 / num;
        cout << "The result is: " << res << endl;
    }
    catch (...) // here catch take all types of parameters Like int flot char double.
    {
        cout << "Sorry Don't Enter 0 here...." << endl;
    }
    cout << "Bye" << endl;

    return 0;
}