// 37)  Write a program that inputs a number from the user and displays the factorial of that number using for loop.

#include <iostream>
using namespace std;

int main()
{
	//using for loop
	cout<<"\tFIND FACTORIAL OF ANY NUMBER\n\n";
	int counter, num, factorial=1;
	
	cout<<"Enter a number:\n";
	cin>>num;
	for (counter=1; counter<=num; counter++)
	{
		factorial = factorial * counter;
	}
	cout<<"Factorial of "<<num<<" is "<<factorial<<endl;
	
	return 0;
} 