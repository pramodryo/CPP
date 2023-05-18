/* Derivation of a class from another derived class */

#include<iostream>
using namespace std;
class base      // base class
{
	int x;
	public:
	base(): x(0)
	{
		cout<<"constructor base"<<endl;
	}
	base(int a): x(a)
	{
		cout<<"para constructor base"<<endl;
	}
	~base()
	{
		cout<<"destructor base"<<endl;
	}
};

class derived1: public base       // derived1: inherited from base
{
	int m;
	public:
	derived1()
	{
		cout<<"constructor derived1"<<endl;
		m=30;
	}
	derived1(int a, int b): base(a), m(b)
	{
		cout<<"para constructor derived1"<<endl;
	}
	~derived1()
	{
		cout<<"destructor derived1"<<endl;
	}
};

class derived2: public derived1      // derived2: inherited from derived1
{
	int y;
	public:
	derived2(): y(40)
	{
		cout<<"constructor derived2"<<endl;
	}
	derived2(int a, int b, int c): derived1(a,b), y(c)
	{
		cout<<"para constructor derived2"<<endl;
	}
	~derived2()
	{
		cout<<"destructor derived2"<<endl;
	}
};

int main()
{
	derived2 d;
}

/* OUTPUT:
   constructor base
   constructor derived1
   constructor derived2
   destructor derived2
   destructor derived1
   destructor base

NOTE:-  we can not call base class from derived2 class because there is no direct connection
 */



