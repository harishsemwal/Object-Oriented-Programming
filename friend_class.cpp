// Friend class

#include <iostream>
using namespace std;

class a
{
    int num;
    public:
        void getData();
};

class b : public a
{
    // friend class a :    if all mamber wants to make friend.

    friend void a :: getData()
    {
        cout << "Harish" << endl;
    }

};

int main()
{
    b obj;
    obj.getData();
}