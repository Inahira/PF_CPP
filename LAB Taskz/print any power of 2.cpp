#include <iostream>
using namespace std;

int main()
{
	int num, result = 1, counter = 1;
	
	cout<<"Enter positive intiger:\n";
	cin>>num;
	
	do
	{
		result *= 2;
		counter++;
	}
	while (counter <= num);
	cout<<"2 raised to the "<<num<<" power is "<<result<<endl;
	
	/*
	while (counter <= num)
	{
		result *= 2;
		counter++;
		
	}
	cout<<"2 raised to the "<<num<<" power is "<<result<<endl;
	*/
	return 0;

}