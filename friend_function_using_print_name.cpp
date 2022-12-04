#include<iostream>
using namespace std;

class student
{
	string name;
	friend void display (student &ref);
	
	public :
		void getData()
		{
			cout << "Enter The name: ";
			cin  >> name;
		}
};

void display(student &ref)
{
	cout << "The name is: " << ref.name;
}

int main()
{
	student obj1;
	obj1.getData();
	display(obj1);
}
