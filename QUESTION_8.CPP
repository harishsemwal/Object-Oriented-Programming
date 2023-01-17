// Illustrate how diamond problem is resolved by use of virtual base class.

#include <iostream>
using namespace std;

class alpha
{
public:
    alpha()
    {
        cout << "alpha constructor is called" << endl;
    }
};

class beta : virtual public alpha
{
public:
    beta()
    {
        cout << "Beta constructor is called" << endl;
    }
};

class gamma : virtual public alpha
{
public:
    gamma()
    {
        cout << "gamma constructor is called" << endl;
    }
};

class Theta : public beta, public gamma
{
public:
    Theta()
    {
        cout << "Theta constructor is called" << endl;
    }
};

int main()
{
    Theta object;
}