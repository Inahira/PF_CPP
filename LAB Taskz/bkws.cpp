#include<iostream>
using namespace std;

int main()
{
	float hra, bs, da, gs, a, b, c;
	a=10;
	b=100;
	c=98;
	hra=500;
	
	cout<<"your basic salary:\n";
	cin>>bs;
	
	hra=bs*a/b;
	da=bs*c/b;
	
	gs=bs+hra+da;
	
	if (bs<1500)
	{
		
		cout<<gs;
	}
	else 
	{
		hra=500;
		da=bs*c/b;
		cout<<da;
	}
}
