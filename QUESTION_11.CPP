/* Write a program to show the difference between method overloading and overriding. */

#include <iostream> 
using namespace std;

class alpha
{
    public:
        void add(int a, int b)
        {
            cout << "Sum is: " << a + b << endl;
        }

        void add(double a,double b)
        {
            cout << "Sum is: " << a + b << endl; 
        }

        //Overriding
        void display_data()
        {
            cout << "This is overriding function in alpha class !!!" << endl;
        }
};

class beta : public alpha
{
    public:
        //Overriding
        void display_data()
        {
            cout << "This is overriding function in beta class !!!" << endl;
        }
};

int main()
{
    // Overloading
    alpha object_a;
    object_a.add(6,7);
    object_a.add(7.6,9.4);

    //Overriding alpha
    object_a.display_data();

    //Overriding beta
    beta object_b;
    object_b.display_data();
}
