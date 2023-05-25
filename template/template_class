/*WAP to take array of differant data type and reverse it and sort it using class tamplate. 

syntax: 
template<class type>
class class_name
{
type x;
type x,y;
}
 */

#include<iostream>
using namespace std;
template<class type>
#define SIZE 5
class ARRAY
{
	type a[SIZE];
	public:
	void set_data()    // function defination inside class
	{
		int i;             // type is user defined data type
		for(i=0;i<SIZE;i++)
		{
			cin>>a[i];
		}
	}

	void get_data()      // function defination inside class
	{
		int i;
		for(i=0;i<SIZE;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}

	void reverse_data();         // function declaration inside class
	void sort_data();            // function  declaration inside class
}; // EO class

/* syntax for function defination outside the classa

   return_type class_name<type>::function_name(arg...)
 */

	template<class type>    // this is mandatory while function declare outside the class 
void ARRAY<type>::reverse_data()
{
	int i,j;
	type temp;
	for(i=0,j=SIZE-1;i<j;i++,j--)
	{
		temp = a[i];
		a[i]= a[j];
		a[j] = temp;
	}
} // EO reverse data

	template<class type>         // mandatory line otherwise it will give error
void ARRAY<type>::sort_data()
{
	int i,j;
	type temp;
	for(i=0;i<SIZE-1;i++)
	{
		for(j=0;j<SIZE-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j]= a[j+1];
				a[j+1] = temp;
			}
		}
	}
} // EO sort data

int main()
{

	ARRAY<int> obj1;           // taking object as int
	cout<<"Enter int ele"<<endl;
	obj1.set_data();
	obj1.get_data();
	obj1.reverse_data();
	obj1.get_data();
	obj1.sort_data();
	obj1.get_data();


	ARRAY<float> obj2;           // taking object as float data type
	cout<<"Enter float ele"<<endl;
	obj2.set_data();
	obj2.get_data();
	obj2.reverse_data();
	obj2.get_data();
	obj2.sort_data();
	obj2.get_data();

	ARRAY<char> obj3;           // taking object as char
	cout<<"Enter char ele"<<endl;
	obj3.set_data();
	obj3.get_data();
	obj3.reverse_data();
	obj3.get_data();
	obj3.sort_data();
	obj3.get_data();

	ARRAY<string> obj5;           // taking object as string
	cout<<"Enter string ele"<<endl;
	obj5.set_data();
	obj5.get_data();
	obj5.reverse_data();
	obj5.get_data();
	obj5.sort_data();
	obj5.get_data();


} // EO main

/*
   using class tamplate we can use only one class as generic type for all type of data.
 */
