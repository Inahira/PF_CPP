// 23)  Write a program that displays back counting from 10 to 1 using do while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using do while loop
	cout<<"\n\tBACK COUNTING 10-1\n\n";
	int counter=10;
	
	do
	{
		cout<<"\t"<<counter<<endl;
		counter--;
	}
	while (counter>=1);
	
	return 0;
}