// istream function

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;

    fin.open("myfile.txt");
    char ch = fin.get();

    while(!fin.eof())
    {
        cout << ch;
        fin >> ch;
    }
}