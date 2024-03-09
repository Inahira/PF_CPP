/*
54)  Write a program that inputs an integer from the user. it displays the sum of integers for each integer from 1 to the given integer. 

*/

#include <iostream>
using namespace std;

int main()
{
	int counter=1, num, sum=0;
	
	cout<<"Enter an integer:\n";
	cin>>num;
	
	while (counter<=num)
	{
		sum = sum + counter;
		counter++;
	}
	cout<<"Sum of integers from \'1\' to \'"<<num<<"\' is "<<sum<<":\n";
	
	return 0;
}