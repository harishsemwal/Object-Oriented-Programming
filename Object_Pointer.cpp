// Pointer in c++
// Objects Pointer

#include <iostream>
using namespace std;

class small_box
{
    int length, breath, hight;
    
    public :
        void set_diamentions(int l, int b, int h)
        {
            length = l;
            breath = b;
            hight  = h;
        }
        
        void show_diamention()
        {
            cout << "length: " << length << " breath: " << breath << " hight :" << hight << endl;
        }
};

int main()
{
    small_box *objPtr, obj;
    objPtr = &obj;
    objPtr->set_diamentions(15,20,65);
    objPtr->show_diamention();
}