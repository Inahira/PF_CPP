// 34)  Write a program that displays first ten numbers and their average using for loop. 

#include <iostream>
using namespace std;

int main()
{
	int counter, sum=0;
	float avg;
	
	for(counter=1; counter<=10; counter++)
	{
		cout<<"\t"<<counter<<"\n"<<endl;
		sum = sum + counter;
		avg = sum / counter;
	}

	cout<<"\tThe average of 1st 10 numbers is "<<avg<<endl;
	
	return 0;
}