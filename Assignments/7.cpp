/* WAP to create class complex with real and imaginary parts.
   perform addition and subtraction of two complex number.
 
   complex multiplication = (a+bj)(c+dj) = ac + jad + jbc + j^2bd
   = (ac - bd) +j(ad + bc) -> because j^2 = -1.
 */

#include<iostream>
using namespace std;

class COMPLEX
{
	int real, img;
	public:
	void set_data()
	{
		cout<<"Enter the real and img part"<<endl;
		cin>>real>>img;
	}
	void get_data()
	{
		if(img>0)
			cout<<real<<"+"<<img<<"j"<<endl;
		else
			cout<<real<<img<<"j"<<endl;
	}

	void sum(COMPLEX obj1, COMPLEX obj2);
	void sub(COMPLEX obj1, COMPLEX obj2);
	void mul(COMPLEX obj1, COMPLEX obj2);
}; // EO class

void COMPLEX::mul(COMPLEX obj1, COMPLEX obj2)  // multiplication
{
	cout<<"mul..."<<endl;
	real = (obj1.real * obj2.real) - (obj1.img * obj2.img);
	img = (obj1.real * obj2.img) + (obj1.img * obj2.real);
}

void COMPLEX::sum(COMPLEX obj1, COMPLEX obj2)   // addition
{
	cout<<"sum..."<<endl;
	real = obj1.real + obj2.real;
	img = obj1.img + obj2.img;
}

void COMPLEX::sub(COMPLEX obj1, COMPLEX obj2)    // subtraction
{
	cout<<"sub.."<<endl;
	real = obj1.real - obj2.real;
	img = obj1.img - obj2.img;
}

int main()
{
	COMPLEX obj1,obj2,obj3,obj4,obj5;

	obj1.set_data();
	obj2.set_data();

	obj1.get_data();
	obj2.get_data();

	obj3.sum(obj1,obj2);
	obj3.get_data();

	obj4.sub(obj1,obj2);
	obj4.get_data();

	obj5.mul(obj1,obj2);
	obj5.get_data();
}
