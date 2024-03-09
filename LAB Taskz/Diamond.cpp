#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	
	cout<<"Enter number of rows:\n";
	cin>>k;
	for (i=k-1; i>=k; i--)
	{
		for (j=1; j<=k-i; j++)
		{
		 cout<<" ";	
		}
		for (j=1; j<=2*i-1; j++)
		{
		 cout<<" * ";	
		}
		cout<<"\n";
	}
	
	return 0;
}
