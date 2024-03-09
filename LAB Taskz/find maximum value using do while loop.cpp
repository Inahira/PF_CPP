#include <iostream>
using namespace std;

int main()
{
	int value, max = 0;
	/*
	do
	{
		cout<<"Enter a positive number:\n";
		cout<<"(-1 to stop)\n";
		cin>>value;
		if (value > max)
		{
			max = value;
		}
	
	}
	while (value != -1);
	cout<<"The maximum value found is "<< max << endl;
	*/
	while (value != -1)
	{
	   cout<<"Enter a positive number:\n";
		cout<<"(-1 to stop)\n";
		cin>>value;
		if (value > max)
		{
			max = value;
		}	
		cout<<"The maximum value found is "<< max << endl;
	}
	
	return 0;
}