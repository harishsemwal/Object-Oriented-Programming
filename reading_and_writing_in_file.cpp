// reading and writing on the file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream o;
	o.open("C:\\Users\\HP\\Desktop\\Term work wagera\\C++ Preacticle end term\\Harish.txt");
	
	o << "Hello This is Harish Semwal !!!";
	
	o.seekg(0); // it means move pointer to starting position.
	
	string str;
	
	while(getline(o, str))
	{
		cout << str;
		cout << endl;
	}
	
	o.close();
}