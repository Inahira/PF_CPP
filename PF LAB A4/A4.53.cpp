/*
53)  Write a program that displays the following using do while loop. 
4 4 4 4 
3 3 3 
2 2 
1 

*/

#include <iostream>
using namespace std;

int main()
{
	int i=4, j=1;
	
	do
	{
		do 
		{
			cout<<"\t"<<i;
			j++;
		}
		while (j<=i);
		
		cout<<"\n";
		i--;
	}
	while  (i>=1);
	
	
	return 0;
}