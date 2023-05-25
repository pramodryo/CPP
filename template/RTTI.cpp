/* Run-Time Type Identification (RTTI)
   It is a mechanism that allows the type of an object to be determined during program execution. */

#include<iostream>
#include<typeinfo>
using namespace std;
template <class type1, class type2, class type3=double>

type1 sum(type1 a, type2 b)
{
	cout<<"type of a: "<<typeid(a).name() <<endl;
	cout<<"type of b: "<<typeid(b).name() <<endl;
	return a+b;
}

int main()
{
	cout << sum(10.89f, 100.34f)<<endl;
	cout << sum(34, 10.56)<<endl;
}
