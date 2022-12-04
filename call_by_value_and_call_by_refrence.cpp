#include <iostream>
using namespace std;


void convert(int a, int b)
{
    a = 9;
    b = 6;
    cout << "after: a = " << a << " b = " << b << endl << endl;
}
void convert(int *a, int *b)
{
    *a = 9;
    *b = 6;
    cout << "after: a = " << *a << " b = " << *b << endl << endl;
}
int main()
{
    int a = 5;
    int b = 9;
    int sum = 0;

    cout << "call by value: " << endl<< endl;
    cout << "Before: a = " << a << " b = " << b << endl << endl;
    convert(a,b);
    cout << "Before: a = " << a << " b = " << b << endl << endl;

    cout << "call by refrence: " << endl;
    cout << "Before: a = " << a << " b = " << b << endl<< endl;
    convert(&a,&b);
    cout << "call by refrence: " << endl;
    cout << "Before: a = " << a << " b = " << b << endl<< endl;
}