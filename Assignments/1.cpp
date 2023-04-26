// WAP to swap two variable using function(don't use pointer)
#include<iostream>
using namespace std;

void swap_data(int &a, int &b) // Arguments catch with referance
{
	int t;
	t=a;
	a=b;
	b=t;
}// EO swap_data
int main()
{
	int x=10, y=20;
	swap_data(x,y);   // call by referance

	cout<<"After swap"<<endl;
	cout<<"x: "<<x<<" y: "<<y<<endl;
}
