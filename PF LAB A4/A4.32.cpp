//32)  Write a program to display counting from 1 to 10. 
#include <iostream>
using namespace std;

int main()
{
	
	cout<<"\tcounting from 1 to 10\n";
	int counter=1;
	
	//using for loop
	for (counter; counter<=10; counter++)
	{
		cout<<counter<<endl;
	}
	
	/*
	//using while loop
	while (counter<=10)
	{
		cout<<counter<<endl;
		counter++;
	}
	*/
	
	/*
	//using do while loop
	do
	{
		cout<<counter<<endl;
		counter++;
	}
	while (counter<=10);
	*/
	
	return 0;
}