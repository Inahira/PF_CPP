/*
50)  Write a problem to produce the following output: 
0 
0 1 
0 1 4
0 1 4 9 
0 1 4 9 16 
0 1 4 9 16 25 

*/

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	
	for (i=0; i<=5; i++)
	{
		for (j=0; j<=i; j++)
		{
			cout<<j*j<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}