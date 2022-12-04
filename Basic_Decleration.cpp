#include<iostream>
using namespace std;

class student
{
	public:
		string name;

		void printname()
		{
			cout << "The name of The student is: " << name << endl;
		}
};

int main()
{
	student s1,s2;

	cout << "Enter The student name: " << endl;
	cin >> s1.name;
	s1.printname();

	cout << "Enter The student name: " << endl;
	cin >> s2.name;
	s2.printname();
}