/*
   A template is a tool that reduces the efforts in writing the same code as templates can be used at those places.
   A template function can be overloaded either by a non-template function or using an ordinary function template.
 */


#include<iostream>
using namespace std;

	template <class Type>
Type sum(Type a, Type b)
{
	cout<<"using generic function"<<endl;
	return a+b;
} 

float sum(float a, float b)
{
	cout<<"using float sum function"<<endl;
	return a+b;
}


int main()
{

	int a=10, b = 20, c;     
	c = sum(a,b);               // int type argumnet sum func is not there hence it will call generic function which having two argument
	cout<<"a + b= "<< c <<endl;

	float f1= 56.67f, f2 = 23.45f, f3; 
	f3 = sum(f1,f2);      // float type argument sum function available, so it will call that function only
	cout<<"f1 + f2= "<< f3 <<endl;
}
