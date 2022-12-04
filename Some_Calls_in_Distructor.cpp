// Constructor  and distructor In Inheritance

#include <iostream>
using namespace std;

class a
{
    
    public:
    
    a()
    {
        cout << "Heloo inside a Constructor......." << endl;
    }
   
    ~a()
    {
        cout << "Heloo inside a Destructor......." << endl;
    }
};

class b : public a
{
    public:
    b()
    {
        cout << "Heloo inside b Constructor......." << endl;
    }
   
    ~b()
    {
        cout << "Heloo inside b Destructor......." << endl;
    }
};

int main()
{
    {
        b obj;
    }
    cout << "BYE" << endl;
}