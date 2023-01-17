#include <iostream>
#include <list>
using namespace std;

int main()
{
    int val;
    list <int> lst = {4,7,9,6,3,2,2,2,4};

    // list <int> lstst = {40,80};

    list <int> :: iterator itr;
    //itr = lst.begin();

    cout << "The Elements is: " << endl;
    for(itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;


    //lst.remove(6); // it can use to remove the element.
    // lst.unique(); // remove the duplicate elements from list

    // lst.reverse(); // reverse the elements

    //lst.sort();

    cout << "The Elements is: " << endl;
    for(itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;


    // cout << "The size is: " << lst.size() << endl;

    // lst.resize(20);

    // cout << "The modified size: " << lst.size() << endl;




    // cout << "Enter The element to delete: " << endl;
    // cin >> val;
    // lst.erase(lst.begin()+3, lst.begin() + 5);
    

    // merge list1.merge(list2)
    // list1.reverse()

    // cout << "the Last element: " << lst.back() << endl;
    // //cout << "the first element: " << lst.begin(itr) << endl;
    
    // // lst.clear() // delete all the elements

    // if(!lst.empty())
    // {
    //     cout << "list is not empty !!!" << endl;
    // }

    // cout << "the last element: " << lst.end() // gives reference to the last element
    
    // lst.pop_back();
    // lst.pop_front();

    // lst.push_back(5);
    // lst.push_front(2);

}