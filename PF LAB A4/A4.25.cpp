// 25)  Write a program that displays first ten odd numbers using do while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using do while loop
	cout<<"\n\t1st TEN ODD NUMBERS\n\n";
	int counter=1;
	
	do
	{
		cout<<"\t"<<counter<<endl;
		counter += 2;
	}
	while (counter<=20);
	
	return 0;
}