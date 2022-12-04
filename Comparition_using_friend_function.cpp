//Biggest of two number using friend function.

#include<iostream>
using namespace std;

class b;

class a
{
	int x;
	public :
		void setData()
		{
			cout << "Enter The Element in class a: ";
			cin >> x;
		}
	friend void dif(a &ref1,b &ref2);
};

class b
{
	int y;
	public :
		void setData()
		{
			cout << "Enter The Element in class b: ";
			cin >> y;
		}
	friend void dif(a &ref1,b &ref2);
};

void dif(a &ref1,b &ref2)
{
	if(ref1.x > ref2.y)
	{
		cout << ref1.x << " is Biggest !!" << endl;
	}
	else
	{
		cout << ref2.y << " is Biggest !!" << endl; 
	}
}

int main()
{
	a obj;
	b num;
	
	obj.setData();
	num.setData();
	
	dif(obj,num);
}

