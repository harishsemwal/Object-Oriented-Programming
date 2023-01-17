#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream var;
    var.open("index.txt",ios :: app);
    var << "Bye";

    return 0;
}
