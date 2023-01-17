// Demonstrate the order of constructor and destructor calls in inheritance.

#include <iostream>
using namespace std;

class alpha
{
public:
    alpha()
    {
        cout << "alpha constructor is called" << endl;
    }

    ~alpha()
    {
        cout << "alpha Destructor is called" << endl;
    }
};

class beta : public alpha
{
public:
    beta()
    {
        cout << "Beta constructor is called" << endl;
    }

    ~beta()
    {
        cout << "Beta Destructor is called" << endl;
    }
};

class gamma : public alpha
{
public:
    gamma()
    {
        cout << "gamma constructor is called" << endl;
    }

    ~gamma()
    {
        cout << "gamma Destructor is called" << endl;
    }
};

class Theta : public beta, public gamma
{
public:
    Theta()
    {
        cout << "Theta constructor is called" << endl;
    }

    ~Theta()
    {
        cout << "Theta Destructor is called" << endl;
    }
};

int main()
{
    Theta object;
}
