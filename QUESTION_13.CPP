// Write a program to create a pure virtual function inside a class and use it from main method.

#include <iostream>
using namespace std;

class base
{
    public:
        virtual void show() = 0;
};

class derived : public base
{
    public:
        void show()
        {
            cout << "You are in derived class !!!" << endl;
        }
};
int main()
{
    base *ptr = new derived();
    ptr->show();
    return 0;
}