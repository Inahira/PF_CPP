// 42)  Write a program that inputs an integer and displays its table in descending order using for loop. 

#include <iostream>
using namespace std;

int main()
{
	//using for loop
	cout<<"\n\tPRINT TABLE OF ANY NUMBER IN DESCENDING ORDER\n\n";
	int counter, num, table;
	
	cout<<"Enter a number:\n";
	cin>>num;
	
	for (counter=10; counter>=1; counter--)
	{
		cout<<"\t"<<num<<" * "<<counter<<" = "<<num * counter<<endl;
	}
	
	return 0;
}