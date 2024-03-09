// 39)  Write a program that displays product of all odd numbers from 1 to 10 using for loop. 
#include <iostream>
using namespace std;

int main()
{
	//using for loop
	cout<<"\tPRODUCT OF ODD NUMBERS BETWEEN 1-10\n\n";
	int counter, product=1;
	
	for (counter=1; counter<=10; counter+=2)
	{
		product = product * counter;
	}
	cout<<"\tThe Product of all the odd numbers between 1-10 is \'"<<product<<"\'";
	
	return 0;
}