// Single Inheritance

#include <iostream> 
using namespace std;

class B
{
    int a;
    public:
        int b;
        void set_ab();
        int get_a();

};

class D : public B
{
    int c;
    public:
        void mul();
        void display();
};

void B :: set_ab()
{
    cout << "Enter The number a: " << endl;
    cin >> a;
    cout << "Enter The number b: " << endl;
    cin >> b;
}

int B :: get_a()
{
    return a;
}

void D :: mul()
{
    c = b * get_a() ;
}

void D :: display()
{
    cout << "a : " << get_a() << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
}

int main()
{
    D obj1;
    obj1.set_ab();
    obj1.mul();
    obj1.display();
}