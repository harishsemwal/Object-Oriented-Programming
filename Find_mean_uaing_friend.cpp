#include<iostream>
using namespace std;

class sample
{
    int a;
    int b;

    public:
        void setValue()
        {
            a = 54;
            b = 87;
        }
    friend float mean(sample &ref);
};

float mean(sample &ref)
{
    return float(ref.a + ref.b)/2.0;
}

int main()
{
    sample x;
    x.setValue();

    cout << "mean value: " << mean(x) ;
}
