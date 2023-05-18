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

class derived: public base1, public base2
{
	public:
		derived()
		{
			cout<<"constructor derived"<<endl;
		}
		~derived()
		{
			cout<<"destructor derived"<<endl;
		}
};

int main()
{
	derived d;
}
