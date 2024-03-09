// 16)  Write a program that displays first five numbers and their sum using while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using while loop
	int counter=1, sum=0;
	
	while (counter<=5)
	{
		sum = sum + counter;
		cout<<"\n\t"<<counter<<endl;
		counter++;
	}
	cout<<"\tSum of first 5 numbers is \'"<<sum<<"\'\n";
	
	return 0;
}