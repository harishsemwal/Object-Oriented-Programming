// Demonstrate exception handling using try, catch and throw keyword.

#include <iostream>
using namespace std;

int main()
{
    int num;
    try
    {
        cout << "Enter the number: ";
        cin >> num;

        if(num == 0)
        {
            throw 2;
        }
        else 
        {
            cout << "answer: " << 10 / num << endl;
        }
    }
    catch(int x)
    {
        cout << "Please do not enter 0 !!!";
    }
    return 0;
}