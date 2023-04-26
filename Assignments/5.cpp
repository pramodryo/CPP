/*WAP to calculate simple interest using friend function.
  SI = (P*N*R)/100; 
  Total amount = Interest + P;
 */
#include<iostream>
using namespace std;
class SI
{
	int P,N,R;  // by default data are in private in class
	public:
	void set_data();
	friend void interest(SI );    // friend fun declaration inside class
};   // EO Class

void SI::set_data()    // member function defination outside class
{
	cout<<"Enter P,N,R"<<endl;
	cin>>P>>N>>R;
}

void interest(SI o)     // friend function defination
{
	int i,t;
	i = (o.P*o.N*o.R)/100;
	t = i+o.P;
	cout<<"interest is: "<<i<<endl;
	cout<<"Total amount with interest is: "<<t<<endl;
}

int main()
{
	SI obj1;
	obj1.set_data();   
	interest(obj1);  // calling friend function with object as argument
}
