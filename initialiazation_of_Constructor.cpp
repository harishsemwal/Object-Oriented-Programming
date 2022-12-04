// Initialiazation of of Constructor in C++
// its is important Please read carefully.

#include <iostream>
using namespace std;

class alpha
{
    int x;
    public:
        alpha(int i)
        {
            x = i;
            cout << "alpha is Constructed !!!" << endl;
        }

        void show_alpha()
        {
            cout << "x : " << x << endl;
        }
};

class beta
{
    float p, q;
    public:
        beta(float a, float b) : p(a), q(b+p)
        {
            cout << "beta is Constructed !!!" << endl;
        }
        void show_beta()
        {
            cout << "p : " << p << endl;
            cout << "q : " << q << endl;
        }
};

class gamma : public beta, public alpha
{
    int u, v;
    public:
        gamma(int a, int b, int c) : alpha(a*2),beta(c,c),u(a),v(b)
        {
            cout << "gamma is Constructed !!! " << endl;
        }
        void show_gamma()
        {
            cout << "u : " << u << endl;
            cout << "v : " << v << endl;
        }
};

int main()
{
    gamma g(77, 99, 3.6);

    cout << "Display member Values: " << endl;
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
}