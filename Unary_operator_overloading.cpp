/*
Operator Overloading: 
 an operator is sppose to work on a primitive data type. to make
 operators work on user deafined data type. we do operate operator overloading.

unary operator overloading: 
 this type of overloaing is done an uniary operator an operator that works on 
 single operand. 

 */

#include<iostream>
using namespace std;

class one
{
    public: 
        int x = 15;
        int y = 45;
    void operator ++()
    {
        x++;
        y = y + 2;
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    one obj1;
    ++obj1;
}
