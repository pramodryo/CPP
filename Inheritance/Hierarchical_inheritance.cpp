/* DEF:- Derivation of a class from several class*/

#include<iostream>
using namespace std;
class base
{
int x;
	public:
		base()
		{
			cout<<"constructor base"<<endl;
		}
		~base()
		{
			cout<<"destructor base"<<endl;
		}
};

class derived1: public base
{
int y;
	public:
		derived1()
		{
			cout<<"constructor derived1"<<endl;
		}
		~derived1()
		{
			cout<<"destructor derived1"<<endl;
		}
};

class derived2: public base
{
int z;
	public:
		derived2()
		{
			cout<<"constructor derived2"<<endl;
		}
		~derived2()
		{
			cout<<"destructor derived2"<<endl;
		}
};

int main()
{
	derived1 d1;
	cout<<sizeof(d1)<<endl;  // base = 4 + derived1 = 4 == 8 byte
	derived2 d2;
	cout<<sizeof(d2)<<endl;  // base = 4 + derived2 = 4 == 8 byte
	
}
