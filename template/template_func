/* SWAP the int, char and float data using template

template: it is user defined data type, it allows function and class to work on many different data types.

syntax: 
template<class type(any_name)>
return_type function_name (type t){}
 */

#include<iostream>
using namespace std;
	template<class A>      // syntax of template 
void swap_data(A &a,A &b) 
{
	A temp;
	temp =a;
	a = b;
	b = temp;
}

int main()
{
	int x=200, y=300;
	swap_data(x,y);          // int swapping
	cout<<"int data swap"<<endl;
	cout<<"x: "<<x<<" "<<"y: "<<y<<endl;

	char c1='a', c2='b';
	swap_data(c1,c2);              // char swapping
	cout<<"char data swap"<<endl;
	cout<<"c1: "<<c1<<" "<<"c2: "<<c2<<endl;

	float f1=20.55, f2=30.56;
	swap_data(f1,f2);             // floate swapping
	cout<<"float data swap"<<endl;
	cout<<"f1: "<<f1<<" "<<"f2: "<<f2<<endl;
}
