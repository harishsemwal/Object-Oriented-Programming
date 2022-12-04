// Mamber Funciton in c++.

#include <iostream>
using namespace std;

class studet
{
public:
    string name, id;
    int Roll_number, fees;

    void getData(void)
    {
        cout << "Enter The name: ";
        cin >> name;
        cout << "Enter The id: ";
        cin >> id;

        cout << "Enter The Roll number: ";
        cin >> Roll_number;

        cout << "Enter The fees: ";
        cin >> fees;
    }

    void DisplayData(void)
    {
        cout << "The student name is: " << name << endl;
        cout << "The student id is: " << id << endl;
        cout << "The sudent Roll number is: " << Roll_number << endl;
        cout << "The Fees of This student is: " << fees << endl;
    }
};

int main()
{
    studet s1, s2;

    s1.getData();
    cout << endl << "The Details of Student 1: " << endl;
    s1.DisplayData();

    s2.getData();
    cout << endl << "The Deatils of Student 2: " << endl;
    s2.DisplayData();
}