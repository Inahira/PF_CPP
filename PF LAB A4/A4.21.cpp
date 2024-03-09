// 21)  Write a program that inputs a number from the user and display the factorial of that number using while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using do while loop
	cout<<"\n\tFACTORIAL OF ANY NUMBER\n\n";
	int counter=1, num, factorial=1;
	
	cout<<"\tEnter a number:\n";
	cin>>num;
	
	while (counter<=num)
	{
		factorial *= counter;
		counter++;
	}
	cout<<"\tfactorial of \'"<<num<<"\'' is \'"<<factorial<<"\'"<<endl;
	
	return 0;
}