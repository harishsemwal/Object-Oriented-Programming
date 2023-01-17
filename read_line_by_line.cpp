// read line by line from the file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fle;
	fle.open("Harish.txt");
	
	string str;
	
	while(getline(fle,str))
	{
		cout << str;
		cout << endl;
	}
	fle.close();
}