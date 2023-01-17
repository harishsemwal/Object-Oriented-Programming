// Write a program to show the working of protected variable in inheritance.
#include <iostream> 
using namespace std;

class parent
{
    protected:
        int num;
};

class child : public parent
{
    public:
        void getData()
        {
            cout << "Enter The number: ";
            cin >> num;
        } 
        void display()
        {
            cout << "The number is: " << num << endl;
        }
};

int main()
{
    child object_b;

    object_b.getData();
    object_b.display();
}