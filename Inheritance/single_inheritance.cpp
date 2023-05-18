// DEF:- derivation of a class from only one base class

#include<iostream>
using namespace std;
class base
{
	public:
		int x;
};
class derived: public base
{
	public:
		int x;
};

int main()
{

	derived d;
	base b;
	d.x = 10;      // set derived class x value
	d.base::x = 30;  // set base class x value using derived class

	b.x = 200;   //set base class x value
	cout<<d.x<<" "<<d.base::x<<" "<<b.x<<endl;   // 10  30  200
}


/* NOTE:-
   1. Data member of base class and derived class can be same but while accessing first priority goes to derived class.
   2. while accessing data of base class by derived class we need to use scop resolution operator.
 */
