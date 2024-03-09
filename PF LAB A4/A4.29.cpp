// 29)  Write a program that gets starting and ending point from the user and displays all odd numbers in the given range using do while loop. 

#include <iostream>
using namespace std;

int main()
{
	int counter, num1, num2;
	
	cout<<"\tEnter starting number:\n";
	cin>>num1;
	counter = num1;
	cout<<"\tEnter ending number:\n";
	cin>>num2;
	cout<<"\tHere're all the odd numbers b/w \'"<<num1<<" to "<<num2<<"\'\n";
	
	do
	{
		cout<<"\t"<<counter<<endl;
		counter +=2;
	}
	while (counter<=num2);
	
	return 0;
}