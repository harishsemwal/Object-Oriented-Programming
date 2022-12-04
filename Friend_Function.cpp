#include <iostream>
using namespace std;

class student1
{
    string name;
    int Roll, Tag_no;

    public:
    void getData(void)
    {
        cout << "Enter The name: ";
        cin  >> name;
        cout << "Enter The Roll number: ";
        cin  >> Roll;
        cout << "Enter The Tag number: ";
        cin  >> Tag_no;
    }

    friend class student2;
};

class student2
{
    public:
        void display_data(student1 reference) // it is reference To sending Data
        {
            cout << "The name is : "<< reference.name << endl;
            cout << "The Roll number: " << reference.Roll << endl;
            cout << "The Tag number id: " << reference.Tag_no << endl;
        }
};

int main()
{
    student1 s1;
    s1.getData();

    student2 s2;

    s2.display_data(s1);
}