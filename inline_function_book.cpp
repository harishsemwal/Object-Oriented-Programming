// inline_function.

#include <iostream>
using namespace std;

inline void add(int a, int b)
{
    cout << endl << a + b << endl;
}

int main()
{
    int a, b;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter a and b: " << endl;
        a = 5;
        b = 9;
        add(a, b);
    }
}