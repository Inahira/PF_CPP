#include <iostream>
using namespace std;

int main()
{
	int a, b, c, table;
	
	cout<<"Tell me what table you want to print:\n";
	cin>>a;
	cout<<"How many times you want to print it:\n";
	cin>>b;
	
	for (c=1; c<=b; c++)
	{
		table = a*c;
		cout<<a<<" * "<<c<<" = "<<table<<endl;
	}
	return 0;
}
