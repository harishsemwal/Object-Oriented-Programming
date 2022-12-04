// Count the total number of object.

#include <iostream>
using namespace std;

class count_object
{
    public: 
        static int count;
        ~count_object()
        {
            count = count + 1;
        }
        void showData()
        {
            cout << "The total number of object is : " << count << endl;
        }
};
int count_object :: count;

int main()
{
    count_object obj1, obj2, obj3;
    obj3.showData();

}