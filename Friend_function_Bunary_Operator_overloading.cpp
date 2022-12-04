//friend Function using Binary Operator overloading.

#include<iostream>
using namespace std;

class one
{
    int num = 1;
    friend void operator +(one &ref1,one &ref2);
};

void operator +(one &ref1,one &ref2)
{
    cout << ref1.num + ref2.num;
}

int main()
{
    one obj1;
    one obj2;

    obj1 + obj2;
}