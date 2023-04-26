// WAP to define a function with default arguments. 
#include<iostream>
using namespace std;
void sum(int a=10, int b=20, int c=30)  // collecting first two formal argumet and third is default value
{
	cout<<"Sum of a+b+c: "<< a+b+c <<endl;   // ans: 100+200+30 = 330
}


int main()
{
	int x=100,y=200,z=300;
	//cout<<"Enter the value of x,y&z"<<endl;
	//cin>>x>>y>>z;
	sum(x,y);    // passing only two value as actual argument
}
