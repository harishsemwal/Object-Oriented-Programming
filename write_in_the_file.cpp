//ofstream : ofstream class is use to write to a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream o;
	o.open("harish.txt");
	
	o << "writing to a file using ofstream !!!";
	
	o.close();
}