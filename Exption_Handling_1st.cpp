/* Exception Handling : Exception is an error that occurs at run time.
exception is an abnormal condition which terminates the flow of the program abraptly.
using three keyword we do exption Haindling in C++..
1 - try, 2- catch, 3- Throw.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, result;

    cout << "Enter The number: " << endl;
    cin >> num;
    try
    {
        if(num == 0)
        {
            throw 5;
        }
        else
        {
            result = 10 / num;
            cout << "The result is: " << result << endl;
        }
    }
    catch(int x)
    {
        cout << "Please Do not Enter The 0......" << endl;
    }

    cout << "Bye Brother !!!" << endl;

    return 0;
}