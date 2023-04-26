/* WAP to allocate dyanamic memory for five student record and sort it acording to rollno, name and marks
 */
#include<iostream>
using namespace std;
class STD                 // define STD class 
{
	int rollno;        // data members of class STD
	string name;
	float marks;
	public:
	void set_data();        // declaration of set data
	void get_data();        // declaration of get data
	friend void sort_data(STD *, int);   // friend function declaration

};  //EO class

void STD::set_data()    // set data member function
{
	cin>>rollno>>name>>marks;
}//EO setdata

void STD::get_data()    // get data member function
{
	cout<<"Enter the rollno,name and marks"<<endl;
	cout<<rollno<<" "<<name<<" "<<marks<<endl;
}//EO get data

void sort_data(STD *p, int n)    // bubble sorting logic 
{
	int i,j;
	STD temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(p[i].rollno > p[i+1].rollno)
			{
				temp = p[i];
				p[i] = p[i+1];
				p[i+1] = temp;
			}
		}
	}
}//EO sort data

int main()    // main function start
{
	int i,n;
	STD *p;
	cout<<"Enter the number of student"<<endl;
	cin>>n;
	p = new STD[n];  // allocating memory fo n number of student in array

	for(i=0;i<n;i++)
		p[i].set_data();    // calling set dat

	cout<<"Before sorting data"<<endl;
	for(i=0;i<n;i++)             // calling get data
		p[i].get_data();

	sort_data(p,n);           // calling sort function

	cout<<"After sorting data"<<endl;
	for(i=0;i<n;i++)
		p[i].get_data();

}//EO main
