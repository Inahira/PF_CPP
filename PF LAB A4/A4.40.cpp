//40)  Write a program that inputs a number from the user and displays a table of that number using for loop. 
#include <iostream>
using namespace std;

int main()
{
	//using for loop
	cout<<"\n\tPRINT TABLE OF ANY NUMBER\n\n";
	int counter, num, table;
	
	cout<<"Enter a number:\n";
	cin>>num;
	
	for (counter=1; counter<=10; counter++)
	{
		cout<<"\t"<<num<<" * "<<counter<<" = "<<num * counter<<endl;
	}
	
	return 0;
}