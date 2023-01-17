/* Write a program to show the working of constructors and destructors in a class. The object should be created dynamically from main method, initialized from constructor and its memory should be released with the help of a destructor. */

#include <iostream>
using namespace std;

class alpha
{
	public:
    alpha()
    {
        cout << "This is Constructor of alpha class " << endl;
    }

    ~alpha()
    {
        cout << "The is Destructor of alpha class " << endl;
    }
};

class beta
{
    public:
    beta()
    {
        cout << "This is Constructor of beta class " << endl;
    }

    ~beta()
    {
        cout << "The is Destructor of Beta class " << endl;
        //delete ptr;
    } 
};

int main()
{
    alpha *ptr = new alpha;
    
}
