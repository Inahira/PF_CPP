// 41)  Write a program that inputs table number and length of table and then displays the table using for loop.

#include <iostream>
using namespace std;

int main()
{
	//using for loop
	cout<<"\n\tPRINT TABLE OF ANY NUMBER\n\n";
	int counter, num, length, table;
	
	cout<<"Enter a number:\n";
	cin>>num;
	cout<<"Enter the length of the table:\n";
	cin>>length;
	
	for (counter=1; counter<=length; counter++)
	{
		cout<<"\t"<<num<<" * "<<counter<<" = "<<num * counter<<endl;
	}
	
	return 0;
} 