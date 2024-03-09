// 46)  Write a program that displays the sum of positive odd numbers and the product of positive even numbers from 1 to 10. 

#include <iostream>
using namespace std;

int main()
{
	int i, sum=0, product=1;
	
	for (i=1; i<=10; i++)
	{
		if (i%2!=0)
		{
			sum = sum + i;
		}
		else
		{
			product = product * i;
		}
	}
	cout<<"\t Sum of all odd numbers b/w 1-10 \t= \'"<<sum<<"\'\n";
	cout<<"\t Product of all even numbers b/w 1-10 \t= \'"<<product<<"\'\n";
	
	return 0;
}