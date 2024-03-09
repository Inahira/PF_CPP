// 20)  Write a program that displays the following series using while loop: 1 3 5 7 9 11 13 15 17 19 21. 

#include <iostream>
using namespace std;

int main()
{
	int counter=1;
	
	cout<<"\n";
	
	while(counter<=22)
	{
		cout<<"\t"<<counter;
		counter += 2;
	}
	
	return 0; 
}