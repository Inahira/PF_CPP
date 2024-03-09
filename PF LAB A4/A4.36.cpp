//36)  Write a program to print the sum of odd numbers between 1 and 100.  
#include <iostream>
using namespace std;

int main()
{
	//using for loop
	cout<<"\n\tSUM OF ODD NUMBERS BETWEEN 1 TO 100\n\n";
	int counter, sum=0;
	
	for (counter=1; counter<=100; counter+=2)
	{
		sum = sum + counter;
	}
	cout<<"\tThe sum of all the odd numbers between 1 to 100 is "<<sum<<endl;
	
	return 0;
}