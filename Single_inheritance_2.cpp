#include <iostream>
using namespace std;

class a
{
    protected:
        void a1()
        {
            cout << "Heloo You are inside a1" << endl;
        }
};

class b : protected a
{
    public:
    void b1()
    {
        a1();
        cout << "Hello You are inside b1 " << endl;
    }
};

int main()
{
    b obj;
    obj.b1();
}