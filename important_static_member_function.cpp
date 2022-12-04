// static member function

#include <iostream>
using namespace std;

class test
{
    int code;
    static int count; // static member variable
public:
    void getcode()
    {
        code = ++count;
    }

    void showcode() // mamber varivale can access all type of data types or methods.
    {
        cout << "code: " << code << endl;
    }

    static void showcount() // static method can only access static type of variables.
    {
        cout << "count: " << count << endl;
    }
};
int test :: count;

int main()
{
    test t1, t2, t3;
    t1.getcode();
    t2.getcode();
    t3.getcode();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    t1.showcount();
    t2.showcount();
    t3.showcount();
}