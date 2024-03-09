// 28)  Write a program that inputs a number from the user and displays the table of that number using do while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using do while loop
	cout<<"\n\tPRINT TABLE OF ANY NUMBER\n\n";
	int counter=1, num, table;
	
	cout<<"Enter a number:\n";
	cin>>num;
	
	do
	{
		cout<<"\t"<<num<<" * "<<counter<<" = "<<num * counter<<endl;
		counter++;
	}
	while (counter<=10);
	
	return 0;
}