//26)  Write a program that prints odd numbers from 11 to 49 using loop. 

#include <iostream>
using namespace std;

int main()
{
	// using for loop
	cout<<"\n\tODD NUMBERS FROM 11-49\n\n";
	int counter;
	
	for (counter=1; counter<=50; counter+=2)
	{
		cout<<"\t"<<counter<<endl;
	}
	
	return 0;
}