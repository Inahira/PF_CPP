// 19)  Write a program that’s inputs a number from the user and displays a table of that number using while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using while loop
	cout<<"\n\tPRINT TABLE OF ANY NUMBER\n\n";
	int counter=1, num, table;
	
	cout<<"Enter a number:\n";
	cin>>num;
	
	while (counter<=10)

	{
		cout<<"\t"<<num<<" * "<<counter<<" = "<<num * counter<<endl;
		counter++;
	}
	
	return 0;
}