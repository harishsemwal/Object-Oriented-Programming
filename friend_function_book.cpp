// Friend Function
//find the mean.
#include <iostream>
using namespace std;

class number
{
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    public:
        void getData()
        {
            cout << "Enter a: " << endl;
            cin >> a;
            cout << "Enter b: " << endl;
            cin >> b;
            cout << "Enter c: " << endl;
            cin >> c;
            cout << "Enter d: " << endl;
            cin >> d;
            cout << "Enter e: " << endl;
            cin >> e;
            cout << "Enter f: " << endl;
            cin >> f;
        }
    friend float mean(number &n1);
};

float mean(number &n1)
{
    float m;
    m = (n1.a + n1.b+ n1.c + n1.d + n1.e + n1.f);
    
    return m;
}

int main()
{
    number n1; // where n1 is object.
    n1.getData();

    cout << "The mean is : " << (float)mean(n1);
}