// nesting of member function
// binary number cheack if number is binary then display 1's compliment of that number.

#include <iostream>
using namespace std;

class number
{
public:
    string num;

    void getData();
    void cheack_binary()
    {
        for (int i = 0; i < num.length(); i++)
        {
            if (num[i] != '0' && num[i] != '1')
            {
                cout << "Invalid Binary number !!!" << endl;
                exit(0);
            }
        }
        cout << "The Binary number is: " << num << endl;
    }
    void display();
};

void number ::getData()
{
    cout << "Enter The Binary number: ";
    cin >> num;
}

void number ::display()
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '0')
        {
            num[i] = '1';
        }
        else
        {
            num[i] = '0';
        }
    }

    cout << "The 1's Complimenet is: " << num;
}

int main()
{
    number num;
    num.getData();
    num.cheack_binary();
    num.display();
}