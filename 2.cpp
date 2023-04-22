//WAP to take two matrices and  mul them add in new matrics
#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int r1, c1, r2, c2;
	cout<<"Enter r1, c1, r2, c2"<<endl;
	cin>>r1>>c1>>r2>>c2;

	int m1[r1][c1], m2[r2][c2],m4[r1];
	cout<<"Enter m1"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>m1[i][j];
		}
	}

	cout<<"Enter m2"<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>m2[i][j];
		}
	}

	cout<<".....m1...."<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<m1[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<".....m2....."<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<m2[i][j]<<" ";
		}
		cout<<endl;
	}

	//"mul m1 & m2"
	for(i=0;i<r1;i++)
	{
		m4[i]=0;
		for(j=0;j<r2;j++)
		{
			m4[i] = m4[i]+(m1[i][j] * m2[j][i]);
		}
	}
	cout<<"After mul m4"<<endl;
	for(i=0;i<r1;i++)
	{
		cout<<m4[i]<<endl;
	}
}//EO main
