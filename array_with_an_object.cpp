// array with an object.

#include<iostream>
using namespace std;

class employee
{
    private:
        char name[50];
        int age;

    public:
        void getData()
        {
            cout << "Enter The name: " << endl;
            cin >> name;

            cout << "Enter The age: " << endl;
            cin >> age;
        }

        void putData()
        {
            cout << "The name is : " << name << endl;
            cout << "The age is : " << age << endl;
        }
};

int main()
{
    int number;
    cout << "Enter The number of software Engineer: ";
    cin >> number;

    employee engineer[number];

    for (int i = 0; i < number; i++)
    {
        engineer[i].getData();
    }
    
    cout << endl << "The Details is: " << endl;
    for (int i = 0; i < number; i++)
    {
        engineer[i].putData();
    }
}

