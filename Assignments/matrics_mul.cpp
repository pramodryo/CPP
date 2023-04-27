//WAP to take two matrices & mul them add in new matrics.
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int r1, r2, c1, c2, r4,r3,c3;
	int **m1, **m2, **m3;
	cout<<"Enter r1 & c1 for r1Xc1 matrics1"<<endl;   // row & col for m1
	cin>>r1>>c1;
	cout<<"Enter r2&c2 for c1Xc2 matrics2"<<endl;    // row & col for m2
	cin>>r2>>c2;

	m1 = new int*[r1];     // dynamic memory allocation for m1 matric
	for(i=0;i<r1;i++)
		m1[i] = new int[c1];

	m2 = new int*[r2];     // dynamic memory allocation for m2 matric
	for(i=0;i<r2;i++)
		m2[i] = new int[c2];

	m3 = new int*[r1];     // dynamic memory allocation for m3 matric
	for(i=0;i<r2;i++)
		m3[i] = new int[c2];

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
	for(i=0;i<r1;i++)   // matrics multiplication logic
	{
		for(j=0;j<c2;j++)
		{
			m3[i][j]=0;
			for(k=0;k<r2;k++)
			{
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

	cout<<"After mul m4"<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<m3[i][j]<<" ";
		}
		cout<<endl;
	}
}//EO main
