#include <iostream>
using namespace std;

void TOH(int n, char source, char spare, char destination)
{
    if (n == 1)
    {
        cout << "Shift top disk from twoer " << source << " to tower " << destination << endl;
        return;
    }

    TOH(n - 1, source, destination, spare);
    cout << "Shift top disk from twoer " << source << " to tower " << destination << endl;
    TOH(n - 1, destination, spare, source);
}
int main()
{
    int number;
    cout << "Enter The number of disks: " << endl;
    cin >> number;

    TOH(number, '1', '2', '3');
}