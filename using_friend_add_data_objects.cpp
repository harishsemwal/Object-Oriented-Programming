//Using friend function to add data objects of two different class.

#include<iostream>
using namespace std;

class two;

class one
{
    int num;

    public:
        void getData(void)
        {
            cout << "Enter The Element: " << endl;
            cin >> num;
        }

        friend void comparition(one &ref1, two &ref2);
};

class two
{
    int top;
    public:
        void getData(void)
        {
            cout << "Enter The Element: " << endl;
            cin >> top;
        }
    friend void comparition(one &ref1, two &ref2);
};

void comparition(one &ref1, two &ref2)
{
    cout << "The sum of Data objects is: " << ref1.num + ref2.top ;
}

int main()
{
    one a;
    two b;

    a.getData();
    b.getData();

    comparition(a,b);
}