// Create a parent class constructor and pass a value to it from child class constructor.
#include <iostream>
using namespace std;

class parent
{
public:
    parent(int val)
    {
        cout << "value is: " << val << endl;
    }
};

class child : public parent
{
public:
    child() : parent(50)
    {
        cout << "value initialise successfully !!!" << endl;
    }
};
int main()
{
    child object;
}