// To Solve The Diamond Problem we can use virtual keyword.
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

class b : virtual public a
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

class c : virtual public a
{
    public:
    c()
    {
        cout << "Heloo inside c Constructor......." << endl;
    }
   
    ~c()
    {
        cout << "Heloo inside c Destructor......." << endl;
    }
};

class d : public b, public c
{
    public:
    d()
    {
        cout << "Heloo inside d Constructor......." << endl;
    }
   
    ~d()
    {
        cout << "Heloo inside d Destructor......." << endl;
    }
};


int main()
{
    {
        d obj;
    }
    cout << "BYE" << endl;
}


// Heloo inside a Constructor......
// Heloo inside b Constructor......
// Heloo inside c Constructor......
// Heloo inside d Constructor......
// Heloo inside d  Destructor.......
// Heloo inside c Destructor........
// Heloo inside b Destructor........
// Heloo inside a Destructor........
//BYE



