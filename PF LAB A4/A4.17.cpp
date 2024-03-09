// 17)  Write a program that displays first five numbers with their squares using while loop. 

#include <iostream>
using namespace std;

int main()
{
	int counter=1, square;
	
	while (counter<=5)
	{
		square = counter * counter;
		cout<<"\n\t\'"<<counter<<"\' square of "<<counter<<" is \'"<<square<<"\'\n";
		counter++;
	}
	
	return 0;
}