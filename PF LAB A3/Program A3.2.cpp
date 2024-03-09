/*
2. The length of a month varies from 28 to 31 days. Create a program that reads the
name of a month from the user as a string. Then your program should display the
number of days in that month. Display “28 or 29 days” for February
*/
#include<iostream>
using namespace std;

int main()
{
	//heading of this program
	cout<<"\n\tDAYS OF MONTHS\t\n\n";
	cout<<"\tenter lowercase letter only\n\n";
	//declared string variable for months
	string M;
	//ask user to enter name of month
	cout<<"\tEnter the name of the month: \n";
	cin>>M;
	
	//added consition for the month FEBRUARY
	if (M=="february")
	{
	    cout<<"\t28 or 29 days for "<<M<<"\n";	
	}
	//this output will showuop for september, november, june and april
	else if (M=="september" || M=="april" || M=="june" || M=="november")
	{
		cout<<"\t30 days for "<<M<<"\n";	
	}
	//this output will showuop for all other months
	else
	{
		cout<<"\t31 days for "<<M<<"\n";	
	}
	return 0;
}