#include <iostream>
using namespace std;

class one
{
public:
    int num1;
    int num2;
    void getData()
    {
        num1 = 45;
        num2 = 98;
    }
    one(){} // default constructor with empty Body

    one(one &ref)
    {
        num1 = ref.num1;
        num2 = ref.num2;
    }

    void display()
    {
        cout << "The number is: " << endl;
        cout << num1 << " " << num2 << endl;
    }
};

int main()
{
    one obj1;
    obj1.getData();
    obj1.display();

    one obj2(obj1);
    obj2.display();
}
