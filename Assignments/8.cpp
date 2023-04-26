// define three classes, read & display data using friend function
#include<iostream>
using namespace std;
class B;
class C;
class A
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"Enter class A data"<<endl;
		cin>>x>>y;
	}
	friend void display(A,B,C);
};

class B
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"Enter class B data"<<endl;
		cin>>x>>y;
	}
	friend void display(A,B,C);
};

class C
{
	int m,n;
	public:
	void set_data()
	{
		cout<<"Enter class C data"<<endl;
		cin>>m>>n;
	}
	friend void display(A,B,C);
};

void display(A obj1, B obj2, C obj3)
{
	cout<<obj1.x<<" "<<obj1.y<<endl;
	cout<<obj2.x<<" "<<obj2.y<<endl;
	cout<<obj3.m<<" "<<obj3.n<<endl;
}

int main()
{
	A obj1;
	B obj2;
	C obj3;
	obj1.set_data();
	obj2.set_data();
	obj3.set_data();
	display(obj1,obj2,obj3);
}
