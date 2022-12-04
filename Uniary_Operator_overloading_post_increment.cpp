//uniary Operator overloading post increment.

#include <iostream>
#include <stdlib.h>

class one
{
    public:
        int num = 45;

        void operator ++(int)
        {
            num = num + 1;
        }
};

int main()
{
    one obj1;
    obj1++;
}