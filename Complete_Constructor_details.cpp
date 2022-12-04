#include<iostream>
using namespace std;

class one
{
    string name;
    int Rollno;
    string std_ID;

    public:
        one() //non parameterise constructor
        {
            printf("Enter The name: ");
            cin >> name;
            printf("Enter roll: ");
            cin >> Rollno;
        }
        /*
        one(int num) // parameterise constructor
        {
            Rollno = num;
            std_ID = "FEIO45";
        }
        */
        one(one &ref) // copy Constuctor
        {
            std_ID = ref.std_ID;
        }

        void display()
        {
            cout << "name: " << name << "roll: " << Rollno << "stdId: " << std_ID;
        }
};

int main()
{
    one obj1;
    obj1.display();
}