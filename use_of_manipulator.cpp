#include <iostream>
#include <iomanip>  // for setw
using namespace std;

// setw :: it can genrate the space in the programe.

int main()
{
    int basic = 950;
    int allowence = 100;
    int total = 1050;

    cout << setw(10) << "basic : " << setw(10) << basic << endl;
    cout << setw(10) << "allowence : " << setw(10) << allowence << endl;
    cout << setw(10) << "total : " << setw(10) << total << endl;

    return 0;
}