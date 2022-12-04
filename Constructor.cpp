#include<iostream>
using namespace std;

class student
{
	string name;
	int roll_number;
	string student_ID;
	
	public:
		student() //constructor
		{
			cout << "Enter The name: ";
			cin  >> name;
			
			cout << "Enter The roll number: ";
			cin  >> roll_number;
			
			cout << "Enter The student ID: ";
			cin  >> student_ID;
		}
		
		~ student()  //distructor
		{
			cout << "The student Details is : " << endl;
			cout <<"name : " << name <<" "<< "roll number : " << roll_number << " " << "student ID : " << student_ID ;
		}
};

int main()
{
	student s1,s2,s3;
}
