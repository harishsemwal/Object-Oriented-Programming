#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, val;
    vector <int> vt = {2,4,7,9,6,2};

    cout << vt.at(4) << endl;
    cout << vt.back() << endl;

    //cout << vt.begin() << endl;
    cout << vt.capacity() << endl;
    vt.clear();

    vt.empty();  /// determine vector empty or not

    vt.end();

   // cout << vt.erase(5); // delete spacific element

   //vt.insert(8);
   vector <int> :: iterator itr;
   itr = vt.begin();

   int ha = find(vt.begin(), vt.end(), 7);

   
//    itr = itr + 3   now the 9 store in 4th position
   vt.insert(itr,9);

   vt.push_back(7);
   vt.pop_back(); // delete the last element

   vt.resize(7);
//    vt.size();
//    vt.swap();






    // cout << "Enter The number of elements: " << endl;
    // cin >> num;



    // vector <int> v1;
    // vector<double> v2(10);
    // vector <int> v3(v4);

    // cout << vt.size() << endl;
    // cout << vt.capacity() << endl;

    // vt.push_back(5);
    // vt.push_back(10);

    // cout << vt.size() << endl;
    // cout << vt.capacity() << endl;

    // vt.clear();

    // cout << vt.size() << endl;
    // vt.push_back(5);
    // vt.push_back(5);
    // cout << vt.size() << endl;
    // cout << vt.capacity();
}