// WAP to find out total salary of husband and wife using friend function take two class for them.
#include<iostream>
using namespace std;
class wife;
class husband
{
	string name;
	int sal;
	public:
	void set_data()
	{
		cout<<"Enter the name and sal of husband"<<endl;
		cin>>name>>sal;
	}
	friend void total_sal(husband,wife);
};  // class husband

class wife
{
	string name;
	int sal;
	public:
	void set_data()
	{
		cout<<"Enter the name and sal of wife"<<endl;
		cin>>name>>sal;
	}
	friend void total_sal(husband,wife);
};  // wife husband

void total_sal(husband h, wife w)  // friend function
{
	cout<<"Total salary of husband and wife is: "<<h.sal+w.sal<<endl;
}//EO total_sal

int main()   // main function
{
	husband h;
	wife w;
	w.set_data();
	h.set_data();
	total_sal(h,w);
} //EO main
