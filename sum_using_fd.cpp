//add two function using friend function.
#include <iostream>
using namespace std;

class second;

class first
{
    int fnumber;

    public:
        void getData()
        {
            fnumber = 10;
        }
    friend void sume(first , second);
};

class second
{
    int snumber;

    public:
        void getData()
        {
            snumber = 5;
        }
    friend void sume(first , second);
};

void sume(first obj1 , second obj2)
{
    if(obj1.fnumber > obj2.snumber)
    {
        cout << "class 1st is Biggest !!" << endl;
    }
    else
    {
        cout << "class 2nd is Biggest !!" << endl;
    }
}

int main()
{
    first a;
    a.getData();

    second b;
    b.getData();

    sume(a,b);
}