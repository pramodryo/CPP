// WAP to exchange data of two classes using friend function
#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"Enter class A data x&y: "<<endl;
		cin>>x>>y;
	}
	friend void display(A,B);
	friend void swap(A &,B &);
};

class B
{
	int x,y;
	public:
	void set_data()
	{
		cout<<"Enter class B data x&y: "<<endl;
		cin>>x>>y;
	}
	friend void display(A,B);
	friend void swap(A &,B &);
};
void display(A obj1, B obj2)
{
	cout<<"A class data: "<<obj1.x<<" "<<obj1.y<<endl;
	cout<<"B class data: "<<obj2.x<<" "<<obj2.y<<endl;
}

void swap(A &obj1, B &obj2)
{
	int t1,t2;
	t1=obj1.x;
	t2=obj1.y;

	obj1.x=obj2.x;
	obj1.y=obj2.y;

	obj2.x=t1;
	obj2.y=t2;
}

int main()
{
	A obj1;
	B obj2;
	obj1.set_data();
	obj2.set_data();
	cout<<"Before swapping"<<endl;
	display(obj1,obj2);
	swap(obj1,obj2);
	cout<<"After swapping"<<endl;
	display(obj1,obj2);
}
