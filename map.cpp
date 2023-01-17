#include <iostream>
#include <map>

using namespace std;

int main()
{
    map <int, int>  m1 = {{2,7},{7,8},{5,10}};

    map <int, int> :: iterator itr;

    cout << "the itr elements: " << endl;
    for(itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << itr->first << " " << itr->second << " ";
        cout << endl;
    }

    m1.insert(pair <int, int> (20, 30));

    cout << "the itr elements: " << endl;
    for(itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << itr->first << " " << itr->second << " ";
        cout << endl;
    }

    m1.erase(7);
    cout << "the itr elements: " << endl;
    for(itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << itr->first << " " << itr->second << " ";
        cout << endl;
    }


    m1.find(5);
    
    return 0;
}