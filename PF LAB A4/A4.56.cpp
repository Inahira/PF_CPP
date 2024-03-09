/*
56)  Write a program that displays the following shape using nested for loop. 
* 
** 
*** 

*/

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	
	for (i=1; i<=3; i++)
	{
		for (j=1; j<=i; j++)
		{
		 cout<<" * ";	
		}
		cout<<"\n";
	}
	
	return 0;
}