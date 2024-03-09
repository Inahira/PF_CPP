//using switch statement
#include <iostream>
using namespace std;

int main()
{
	char answer;
	cout<<"Is PF an easy course\? (y/n):\n";
	cin>>answer;
	
	switch (answer)
	{
		case'Y':
		case 'y':
			cout<<"I think so too!\n";
			break;	

		case'N':
		case 'n':
			cout<<"Are you kidding\?\n";
			break;
		default:
			cout<<"Is that yes or no\?\n";
    }	
    return 0;
    
}