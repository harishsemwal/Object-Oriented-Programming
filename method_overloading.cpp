// Method overloading
// method overriding
// method hiding

#include <iostream>
using namespace std;

class a
{
public:
    void f1() {} // method overriding.
    void f2() {}
};
class b : public a
{
public:
    void f1() {}      // method overriding.
    void f2(int x) {} // method hiding.
    void f2(float x) {} // method overloading.
};

int main()
{
    b obj;
    obj.f1();
    //obj.f2(); it is error it can there f2 is is founded but 1 arrgument passed.
    obj.f2(2);
}