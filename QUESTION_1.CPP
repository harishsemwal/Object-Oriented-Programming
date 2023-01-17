/* Write a program to create 2 namespaces in a header file. Both the namespaces should contain a variable "name" and a method "printHello()". Access both these variables and methods from the main method. */

#include<iostream>
#include "Header.h"
using namespace std;

using namespace second_namespace;

int main()
{
    cout << display_Data();
}
