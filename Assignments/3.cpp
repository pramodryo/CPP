/* WAP to find area of reactangle, tringle, and sphere using function overloading
   area of rectangle: length * breath
   area of trangle: 1/2 * b*h 
   area of sphere: 4* pi*r2

 */
#include<iostream>
#define pi 3.14
using namespace std;
void area(int l, int b)
{
	cout<<"Area of rectangle: "<< l*b <<endl;
}// EO1

void area(int a, int b, float c)
{
	cout<<"Area of trangle is: "<< a*b*c <<endl;
}// EO2

void area(int r)
{
	cout<<"Area of sphere: "<< 4*pi*r*r <<endl;
}// EO3

int main()
{
	int a=10,b=20;
	area(a,b); // area of reactangle
	area(a,b,0.5);  // call for area of trangle
	area(a); // call for area of sphere
}
