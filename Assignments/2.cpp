// WAP to swap two int, cahr and float using function overloding(don't use pointer)
#include<iostream>
using namespace std;
void swap_data(int &a, int &b) // Arguments catch with referance
{
	int t;
	t=a;
	a=b;
	b=t;
}// EO swap_data
void swap_data(char *a, char *b) // Arguments catch pointer
{
	char t;
	t=*a;
	*a=*b;
	*b=t;
}// EO swap_data
void swap_data(float &a, float &b) // Arguments catch with referance
{
	float t;
	t=a;
	a=b;
	b=t;
}// EO swap_data
int main()
{
	int x=10, y=20;
	char a='A', b='B';
	float m= 23.5, n= 56.57;
	swap_data(x,y);   // call by referance
	swap_data(&a,&b);   // call by address
	swap_data(m,n);   // call by referance

	cout<<"After swap"<<endl;
	cout<<"x: "<<x<<" y: "<<y<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	cout<<"m: "<<m<<" n: "<<n<<endl;
}
