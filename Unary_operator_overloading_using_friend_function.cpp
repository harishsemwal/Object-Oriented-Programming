//Unary operator overloading.

#include<iostream>
using namespace std;

class one 
{
    int x = 1;
    friend void operator ++(one &ref);
};

void operator ++(one &ref)
{
	cout << ref.x + 1;
}

int main()
{
    one obj1;
    ++obj1;
}
