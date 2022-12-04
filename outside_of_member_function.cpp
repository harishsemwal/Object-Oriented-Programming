#include <iostream>
using namespace std;

class student
{
    private:
    string name;
    int roll;

    public:
    void getData();
    void putData();
};

void student :: getData()
{
    cout << "Enter The name: " << endl;
    cin >> name;
    cout << "Enter The roll number: " << endl;
    cin >> roll;
}

void student :: putData()
{
    cout << "name : " << name <<" || "<< " roll number : " << roll << endl;
}

int main()
{
    student std;
    std.getData();
    std.putData();
}