#include<iostream>
using namespace std;

//function here
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
	
int main()
{
	int a,b;
	cout<<"Enter a: \n";
	cin>>a;
	cout<<"Enter b: \n";
	cin>>b;
	cout<<"The function returns "<<sum(a,b);
}