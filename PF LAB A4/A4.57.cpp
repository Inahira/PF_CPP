/*
57)  The following program display the following shape using nested for loops. 
 ****
 ***
 **
 * 

*/

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	
	for (i=4; i>=1; i--)
	{
		for (j=1; j<=i; j++)
		{
		 cout<<" * ";	
		}
		cout<<"\n";
	}
	
	return 0;
}