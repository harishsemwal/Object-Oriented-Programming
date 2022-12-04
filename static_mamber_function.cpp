#include<iostream>
using namespace std;

class item
{
	static int count;
	int num ;
	
	public:
		void getData(int x)
		{
			num = x;
			count = count + 1;
		}
		
		void getcount()
		{
			cout << "count : " << count << endl;
		}
};
int item :: count;
int main()
{
	item a, b, c;
	a.getcount();
	b.getcount();
	c.getcount();
	
	a.getData(45);
	b.getData(87);
	c.getData(98);
	
	cout << "after reading The data: " << endl;
	a.getcount();
	b.getcount();
	c.getcount();
}
