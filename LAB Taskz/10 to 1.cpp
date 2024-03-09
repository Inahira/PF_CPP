#include <iostream>
using namespace std;

int main ()
{
	int counter, sum;
	
	for (counter = 10; counter>=1; counter--)
	{
		cout<<counter<<endl;
		sum = sum+counter;
	}
	cout<<"sum of these numbers is "<<sum<<endl;
	return 0;
}
