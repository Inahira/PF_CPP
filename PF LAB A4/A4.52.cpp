/* 52)  Write a program that displays the following shape using nested loops. the outer loop should be for loop and inner loop should while loop. 
* * * * *
* * * *
* * *
* * 
* 
*/


#include <iostream>
using namespace std;

int main()
{
	int i, j;
	
	for (i=5; i>=1; i--)
	{
		for (j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}