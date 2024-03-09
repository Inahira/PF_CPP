#include <iostream>
using namespace std;

int main()
{
	int sum = 0, num, counter  = 1;
	
	
		
	while (counter <= 5)
	{
		cout<<"Enter an even num:\n";
	    cin>>num;
	    
	    if (num%2==0)
	    {
	    	sum = sum + counter;
		   counter++;
		} 
		else
		{
		   cout<<" it's Not an even number";
		}
	}
	cout<<"The sum of these numbers is "<<sum<<endl;
	return 0;
}
