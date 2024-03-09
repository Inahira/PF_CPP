#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a 1 or 2:\n";
	cin>>a;
	
	if (a==1)
	{
		cout<<"You entered 1\n";
	}
	else
	{
		if(a==2)
		{
			cout<<"You entered 2\n";
		}
		else 
		{
		cout<<"You entered other than 1 or 2\n";	
		}
	}
	return 0;
}