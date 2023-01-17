// File Opening modes.

//following file opening modes:

//a) ios :: in   || used to input a file
//b) ios :: out  || used to write a file
//c) ios :: app  || used to append to the end of file
//d) ios :: trunc|| used to delete content from a file
//e) ios :: binary|| used to open a file as binary

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream i;
	//i.open("C:\\Users\\HP\\Desktop\\Term work wagera\\C++ Preacticle end term\\Harish.txt");
	i.open("harish.txt",ios :: app);

	i << "  hi";
	i.close();
}