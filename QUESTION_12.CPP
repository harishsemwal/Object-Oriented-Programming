// Write a program to create a virtual function inside a class and use it from main method.

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

class beta : virtual alpha
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

class gamma : virtual alpha
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

class Theta : virtual beta, virtual gamma
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
