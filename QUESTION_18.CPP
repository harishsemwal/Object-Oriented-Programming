// Write a program to read a file, and add "Bye" to the end of it.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream o;
    o.open("index.txt",ios :: app);
    o << " Bye";

    // o.seekg(0);
    // o.open("index.txt",ios :: in);
    // string str;

    // while(getline(o, str))
    // {
    //     cout << str;
    // }

    // o.close();
}
