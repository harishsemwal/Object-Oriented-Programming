#include <iostream>
using namespace std;

class student
{
    private:
    string name;
    string univ;

    public: 
    void getData();
    void display();
};

void student :: getData()
{
    cout << "Enter The name: " << endl;
    cin >> name;
    cout << "Enter Teh univ: " << endl;
    cin >> univ;
}


void student :: display()
{
    cout << "name: " << name << " university: " << univ << endl;
}


int main()
{
    int num;
    student std[20];

    cout << "Enter The number of student: " << endl;
    cin >> num;

    cout << "Enter The Details: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter The details of student "<< i+1 <<" : " << endl;
        std[i].getData();
    }
    
    cout << "Enter The Details: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter The details of student "<< i+1 <<" : " << endl;
        std[i].display();
    }
}