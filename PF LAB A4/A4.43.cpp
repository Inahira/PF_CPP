// 43)  Write a program that finds the sum of squares of the integers from 1 to n. where n is a positive value entered by the user (i.e., sum=12+22+33+……n2 ). 

#include <iostream>
using namespace std;

int main()
{
	int i, n, sum=0, square;
	
	cout<<"Enter a positive number:\n";
	cin>>n;
	
	for (i=1; i<=n; i++)
	{
		square = i*i;
		sum = sum + square;
	}
	cout<<"The sum of squares of integers from 1 to "<<n<<" is \'"<<sum<<"\'\n";
	
	return 0;
}