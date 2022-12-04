//Constructor and Distructor in c++
// Constructor In Inheritance

#include <iostream>
using namespace std;

class a
{
    
    public:
    // Nonmeterise Constructor
    a()
    {
        cout << "Heloo inside a......." << endl;
    }
    
    // Parameterise Constructor
    a(int x)
    {
        cout << "The Value is: " << x << endl;
    }
};

class b : public a
{
    public:
    b() : a(45)
    {
        cout << "Heloo inside b......." << endl;
    }
};

int main()
{
    b obj;
}