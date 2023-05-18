/* DEF:- Derivation of a class from several class*/

#include<iostream>
using namespace std;
class base1
{
	public:
		base1()
		{
			cout<<"constructor base1"<<endl;
		}
		~base1()
		{
			cout<<"destructor base1"<<endl;
		}
};

class base2
{
	public:
		base2()
		{
			cout<<"constructor base2"<<endl;
		}
		~base2()
		{
			cout<<"destructor base2"<<endl;
		}
};

class derived1: public base1
{
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

class derived2: public derived1, public base2
{
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
	derived2 d;
}
