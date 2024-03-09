// 18)  Write a program that inputs starting and ending number from the user and then displays all even numbers in the given range. 

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
	cout<<"\tHere're all the even numbers b/w \'"<<num1<<" to "<<num2<<"\'\n";
	
	while (counter<=num2)
	{
		if (counter%2==0)
		{
		   cout<<"\t"<<counter<<endl;	
		}
		counter++;
	}
	
	return 0;
}