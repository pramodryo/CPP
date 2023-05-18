/* Constructor in single inheritance */

#include<iostream>
using namespace std;
class base
{
	int x;
	public:
	base()
	{
		cout<<"constructor base"<<endl;
		x=10;
	}
	~base()
	{
		cout<<"destructor base"<<endl;
	}
};

class derived: public base
{
	int m;
	public:
	derived()
	{
		cout<<"constructor derived"<<endl;
		m=20;
	}
	~derived()
	{
		cout<<"destructor derived"<<endl;
	}
};

int main()
{
	//base b;
	derived d;
}


/*
   Derived classes do not inherit or overload constructors or destructors from their base classes, 
   but they do call the constructor and destructor of base classes.
   The scop of constructor & desctructor belong to same class thats why they are not inheritet

   Q. What is object slicing?
   when derived class object is assigning to base class object then extra featurs of derived class are sliced off
   from the object
 */


