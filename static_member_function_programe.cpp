//paper Queation
#include <iostream>
using namespace std;

class student
{
    static string name;
    static int roll;
    static string univ;

    public:
    static void getData()
    {
        cout << "Enter The name: " << endl;
        cin >> name;
        cout << "Enter The roll number: " << endl;
        cin >> roll;
        univ = "Graphic Era Hill University";
    }

    static void putData()
    {
        cout << "Enter The name: " << name << endl;
        cout << "Enter The roll number: " << roll << endl;
        cout << "univ = " << univ << endl;
    }
};


string student :: name;
string student :: univ;
int student :: roll;

int main()
{
    student std1, std2;
    std1.getData();
    std2.getData();

    std1.putData();
    std2.putData();
}
