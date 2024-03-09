/*
a c++ program in which user gives two values 
and the program will calculate it's sum, product and also 
square and 
*/

#include<iostream>
using namespace std;

int main()
{
	//variable declaration
	float a,b,sum,product,cube_a,cube_b,square_a,square_b;
	
	//inputs here
	cout<<"Enter value for a "<<endl;
	cin>>a;
	cout<<"Enter value for b "<<endl;
	cin>>b;
	
	//variable initialization
	sum = a + b;
	product = a * b;
	square_a = a * a;
	square_b = b * b;
	cube_a = a * a * a;
	cube_b = b * b * b;
	
	//outputs here
	cout<<"The sum of a and b is "<<sum<<endl;
	cout<<"The product of a and b is "<<product<<endl;
	cout<<"The square of a is "<<square_a<<endl;
	cout<<"The square of b is "<<square_b<<endl;
	cout<<"The cube of a is "<<cube_a<<endl;
	cout<<"The cube of b is "<<cube_b<<endl;
	
	return 0;
}