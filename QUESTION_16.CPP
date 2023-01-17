// Create 2 lists and swap the content of those lists.

#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void showList(list<int> lists)
{
    list<int> :: iterator itr;

    for (itr = lists.begin(); itr != lists.end(); itr++)
    {
        cout << *itr << " ";
    }
}

int main()
{
    int num;

    list<int> lst1, lst2;

    cout << "Enter the number of element: " << endl;
    cin >> num;

    cout << "Enter the " << num << " elements: " << endl;
    for (int i = 0; i < num; i++)
    {
        lst1.push_back(i);
        lst2.push_back(i + 2);
    }

    cout << endl << "Before Swapping: ";
    cout << endl << "list 1 elements: ";
    showList(lst1);

    cout << endl << "list 2 elements: ";
    showList(lst2);

    lst1.swap(lst2);

    cout <<endl <<  "After Swapping: ";

    cout << endl << "list 1 elements: ";
    showList(lst1);

    cout << endl << "list 2 elements: ";
    showList(lst2);
}