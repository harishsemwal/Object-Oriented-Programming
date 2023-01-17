// Create a virtual destructor in a class so that memory occupied by child class object can be released.

#include <iostream>
using namespace std;


class parent
{
	public:
	parent()
	{
		cout << "Parent Class Constructor !!!" << endl;
	}
    virtual ~ parent()
    {
    	cout << "Destructor of Parent Class !!!" << endl;
    }
};

class child : public parent
{
	public:
 		child()
    	{
    		cout << "The Construtor of child class !!!" << endl;
		}
		
		~child()
		{
			cout << "The distructor of child class !!!" << endl;
		}
};

int main()
{
	parent *ptr = new child;
    delete ptr;
}
