#include<iostream>
using namespace std;

class one
{
    public:
    int x = 1;
    void operator +(one &ref)
    {
        cout << x + ref.x;
    }
};

int main()
{
    one obj1;
    one obj2;

    obj1 + obj2;
}