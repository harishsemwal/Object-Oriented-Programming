#include<iostream>
using namespace std;

class name
{
    string name;
    string studentID;

    public:
        void getData(void)
        {
            cout << "Enter The name: ";
            cin >> name;

            cout << "Enter The student ID: ";
            cin >> studentID;
        }

        void display()
        {
            cout << "The copid Data is: " << endl;
            cout << "name: " << name << " ID: " << studentID;
        }
};

int main()
{
    name std1, std2;
    std1.getData();

    std2 = std1;
    std2.display();

}