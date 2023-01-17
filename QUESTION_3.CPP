/* Create 2 strings in C++, concatenate these 2 strings and also compare them lexicographically. */

#include <iostream>
using namespace std;

class alpha
{
    public:
        string str1, str2;
        void getData()
        {
            cout << "Enter the first string: " ;
            cin >> str1;
            cout << "Enter the second string: ";
            cin >> str2;
        }
        void display_data()
        {
            cout << "Concatenate: " << str1 + str2 << endl;
            cout << "Comparesion: " << str1.compare(str2) << endl;
        }
};

int main()
{
    alpha obj;
    obj.getData();
    obj.display_data();
}