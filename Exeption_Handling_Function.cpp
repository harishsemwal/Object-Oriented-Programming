// Exception Handling using function.

#include <iostream>
using namespace std;

void cheack_this_one(int num)
{
    int res;

    if(num == 0)
    {
        throw 100;
    }
    else
    {
        res = 55 / num;
        cout << "The answer is: " << res << endl;
    }
}

int main()
{
    int num;

    cout << "Enter The number: ";
    cin >> num;

    try 
    {
        cheack_this_one(num);
    }
    catch(int num)
    {
        cout << "Please Don't Enter These type of number in here !!!" << endl;
    }

    cout << "Bye Brother !!!" << endl;
}