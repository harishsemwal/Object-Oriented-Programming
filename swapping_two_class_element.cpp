//swapping two number using friend function.

#include <iostream>
using namespace std;

class class2;

class class1
{
    int num;

    public:
        void getData()
        {
            cout << "Enter the class 1 number: ";
            cin >> num;
        }

        void display()
        {
            cout << "The number in class 1: " << num << endl;
        }
        friend void swapping(class1 &ref1, class2 &ref2);
};

class class2
{
    int num;


    public:
     void getData()
        {
            cout << "Enter the class 2 number: ";
            cin >> num;
        }

        void display()
        {
            cout << "The number in class 2: " << num << endl;
        }

    friend void swapping(class1 &ref1, class2 &ref2);

    
};

void swapping(class1 &ref1, class2 &ref2)
{
    int temp;
    temp = ref1.num;
    ref1.num = ref2.num;
    ref2.num = temp;
}

int main()
{
    class1 one;
    class2 two;

    one.getData();
    two.getData();

    swapping(one,two);

    one.display();
    two.display();




}