// Single Inheritance

#include <iostream>
using namespace std;

class a
{
    public:
        void a1()
        {
            cout << "Heloo inside a1" << endl;
        }
};

class b : public a
{
    public:
        void b1()
        {
            cout << "Heloo inside b1 " << endl;
        }
};
class c : public b
{
    public:
        void c1()
        {
            cout << "Heloo inside c1 " << endl;
        }
};

class d : public c
{
    public:
        void d1()
        {
            cout << "Heloo inside d1 " << endl;
        }
};

int main()
{
    d obj;
    
    
    obj.a1();
    obj.d1();
    
    obj.b1();
    obj.c1();

    
    obj.a1();
    obj.d1();
    
    obj.b1();
    obj.c1();
}