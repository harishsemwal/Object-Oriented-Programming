//static member function.

#include <iostream>
using namespace std;

class item
{
    static int count;
    int number;

    public:
        void getcount()
        {
            cout << "count: " << count << endl; 
        }

        void getData(int num)
        {
            number = num;
            count++;
        }
};

int item :: count;

int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getData(100);
    b.getData(200);
    b.getData(300);

    a.getcount();
    b.getcount();
    c.getcount();
}