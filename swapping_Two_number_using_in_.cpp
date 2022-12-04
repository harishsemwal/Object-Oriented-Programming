#include <iostream>
using namespace std;

class class2;

class class1
{
    int num1;
    public:
        void getData()
        {
            cout << "Enter The first Element: " << endl;
            cin >> num1;
        }

        void display()
        {
            cout << "num1: " << num1;
        }
    friend void print_number(class1 &ref1, class2 &ref2);
};

class class2
{
    int num2;
    public:
        void getData()
        {
            cout << "Enter The second number: " << endl;
            cin >> num2;
        }
        void display()
        {
            cout << "num2: " << num2;
        }
    friend void print_number(class1 &ref1, class2 &ref2);
};

void print_number(class1 &ref1, class2 &ref2)
{
    int temp;
    temp = ref1.num1;
    ref1.num1 = ref2.num2;
    ref2.num2 = temp;
}

int main()
{
    class1 one;
    class2 two;
    one.getData();
    two.getData();

    cout << "Before swapping the number is: " << endl;
    one.display();
    two.display();
    
    print_number(one,two);
    cout << "after swapping the number is: " << endl;
    one.display();
    two.display();
    

}