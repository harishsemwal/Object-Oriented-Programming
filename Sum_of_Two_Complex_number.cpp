// Sum of Two complex number in c++ using friend function.

#include <iostream>
using namespace std;

class complex
{
    private: 
        int real;
        int img;
    public: 
        void getData(int r, int i)
        {
            real = r;
            img = i;
        }
        void showData()
        {
           cout << real << " + " << img << "i" << endl;
        }
        friend complex operator +(complex, complex);
};

complex operator +(complex X, complex Y)
{
    complex temp;
    temp.img = X.img + Y.real;
    cout << temp.img;
    temp.real = X.img + Y.real;
    cout << temp.real;

    return temp;
}

int main()
{
    complex obj1, obj2, obj3;
    obj1.getData(3,6);
    obj1.showData();

    obj2.getData(6,8);
    obj2.showData();

    obj3 = obj1 + obj2;
    obj3.showData();
}