#include <bits/stdc++.h>
using namespace std;

int main()
{
    int key, num;
    string str;
    map <int, string> mp;

    cout << "Enter the total number of element: ";
    cin >> num;

    cout << "Enter the key and values: ";
    for(int i = 0; i < num; i++)
    {
        cin >> key >> str;
        mp.insert({key, str});
    }

    cout << "The map Elements is: " << endl;
    for(auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;

}