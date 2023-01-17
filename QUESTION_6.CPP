// Overload + operator to add 2 student objects.

#include <iostream>
using namespace std;

class student2;

class student1
{
public:
    int num;
    void getData()
    {
        cout << "Enter The First student number: " << endl;
        cin >> num;
    }
    void friend add(student1 &ref1, student2 &ref2);
};

class student2
{
    public:
    int num;
    void getData()
    {
        cout << "Enter The second student number:" << endl;
        cin >> num;
    }
    void friend add(student1 &ref1, student2 &ref2);
};
void add(student1 &ref1, student2 &ref2)
{
    cout << "The sum of Two objects is: " << ref1.num + ref2.num << endl;
}

int main()
{
    student1 student_one;
    student_one.getData();

    student2 student_two;
    student_two.getData();

    add(student_one,student_two);
}