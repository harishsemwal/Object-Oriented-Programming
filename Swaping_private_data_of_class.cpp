#include<iostream>
using namespace std;

class class2;

class class1
{
    int num;
    public:
        void getData()
        {
            cout << "class one number: " << endl;
            cin >> num;
        }

        void display()
        {
            cout << "class one: " << num << endl;
        }
     friend int swapping(class1 &ref1, class2 &ref2);
};

class class2
{
    int num;
    public:
        void getData()
        {
            cout << "class two number: " << endl;
            cin >> num;
        }
        void dispaly()
        {
            cout << "class two: " << num << endl;
        }
    friend int swapping(class1 &ref1, class2 &ref2);
};

int swapping(class1 &ref1, class2 &ref2)
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

    cout << endl <<"Before swapping: " << endl;
    one.display();
    two.dispaly();

    swapping(one,two);

    cout << endl << "after swapping: " << endl;

    one.display();
    two.dispaly();
}