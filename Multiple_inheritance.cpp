// Multiple inheritance

#include <iostream>
using namespace std;

class a
{
protected:
    int m;

public:
    void get_m();
};

class b
{
protected:
    int n;

public:
    void get_n();
};

class c : public a, public b
{
public:
    void display();
} ;

void c :: display()
{
    cout << "after multiplication the result is: " << m*n << endl;
}
void b :: get_n()
{
    cout << "Enter The value of n: " << endl;
    cin >> n;
}


void a :: get_m()
{
    cout << "Enter The value of m: " << endl;
    cin >> m;
}
int main()
{
    c obj;
    obj.get_m();
    obj.get_n();
    obj.display();
}