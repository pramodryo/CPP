/* DEF:- Derivation of a class from several class*/

#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A()
		{
			cout<<"constructor A"<<endl;
		}
		A(int a): x(a)
	{		
		cout<<"para constructor A"<<endl;
	}
		~A()
		{
			cout<<"destructor A"<<endl;
		}
};
//class B: public A
class B: virtual public A
{
	public:
		int y;
		B()
		{
			cout<<"constructor B"<<endl;
		}
		B(int a, int b): A(a), y(b)
	{		
		cout<<"para constructor B"<<endl;
	}
		~B()
		{
			cout<<"destructor B"<<endl;
		}
};
//class C: public A
class C: virtual public A
{
	public:
		int z;
		C()
		{
			cout<<"constructor C"<<endl;
		}
		C(int a, int b): A(a), z(b)
	{		
		cout<<"para constructor C"<<endl;
	}
		~C()
		{
			cout<<"destructor C"<<endl;
		}
};

class D: public B, public C
{
	public:
		int m;
		D()
		{
			cout<<"constructor D "<<endl;
		}
		D(int a, int b, int c, int d, int e): A(100), B(a,b), C(c,d), m(e)
	{
		cout<<"Para constructor D"<<endl;
	}
		~D()
		{
			cout<<"destructor D"<<endl;
		}

		void get_data()
		{
			//cout<<"x= "<<B::x<<endl;
			//cout<<"x= "<<C::x<<endl;

			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
			cout<<"z= "<<z<<endl;
			cout<<"m= "<<m<<endl;
		}
};

int main()
{
	D obj(10,20,30,40,50);
	obj.get_data();

	cout<<"size of A: "<<sizeof(A)<<endl;
	cout<<"size of B: "<<sizeof(B)<<endl;
	cout<<"size of C: "<<sizeof(C)<<endl;
	cout<<"size of D: "<<sizeof(D)<<endl;
}
