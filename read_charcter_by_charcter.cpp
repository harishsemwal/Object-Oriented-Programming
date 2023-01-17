// read charcter by charcter

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream i;
    i.open("harish.txt");

    char ch;

    while(i.get(ch))
    {
        cout << ch;
    }
    i.close(); // close the file
}