//CHARACTER RECOGNITION
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int a;
	
	cout<<"Enter a character:\n";
	cin>>ch;
	a=int(ch);
	
	if(a>=65 && a<=90)
	{
		cout<<"The character belongs to Capital Alphabets.\n";
	}
	else if(a>=97 && a<=122)
	{
		cout<<"The character belongs to Small Alphabets.\n";
	}
	else
	{
		cout<<"It\' not an alphabet\n";
	}
	return 0;
}