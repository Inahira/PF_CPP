// 44)  Write a program that prints all odd positive integers less than 100 skipping those that are exactly divisible by 7. 

#include <iostream>
using namespace std;

int main()
{
	int i;
	
	for (i=1; i<=100; i++)
	{
		if (i%7!=0)
		{
			cout<<"\t"<<i;
		}
		else
		{
			cout<<" \n";
		}
	}
	
	return 0;
}