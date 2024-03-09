#include <iostream>
using namespace std;

int main()
{
	int a, factorial=1, counter;
	
	cout<<"Enter a number to find it\'s factorial:\n";
	cin>>a;
	
	for (counter=1 ; counter<=a; counter++)
	{
      factorial = factorial*counter;
	}
	
	cout<<"The factorial of the number "<<a<<" is "<<factorial<<endl;                                                             
}
