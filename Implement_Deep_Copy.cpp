// Implement Deep Copy 

#include <iostream>
using namespace std;

class number
{
    int x;
    int num1;
    int num2;

    int *ptr;

    public:
        void getData()
        {
            cout << "Enter The first number: ";
            cin >> num1;
            cout << "Enter The second number: ";
            cin >> num2;
            cout << "Enter The Third number: ";
            cin >> x;
            ptr = &x;
        }

        void display()
        {
            cout << " num1: " << num1 << " num2: " << num2 << " num3: " << *ptr << endl;
        }
        number()
        {}

        number (number &ref)
        {
            num1 = ref.num1;
            num2 = ref.num2;

        }
};

int main()
{
    number n1;
    n1.getData();
    n1.display();
    number n2;

    n2 = n1;
    n2.display();

}