//Binary Operator overloading.

#include<iostream>
using namespace std;

class one 
{
    int x;
    friend void operator +(one &ref1,one &ref2);
};

void operator +(one &ref1,one &ref2)
{
	cout << ref1.x + ref2.x;
}

int main()
{
    one obj1, obj2;
    
    obj1 + obj2;
}
