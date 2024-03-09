/*
4. Canada has three national holidays which fall on the same dates each year. Write
a program that reads a month and day from the user. If the month and day match
one of the holidays listed then your program should display the holiday’s name.
Otherwise, your program should indicate that the entered month and day do not
correspond to a fixed-date holiday
*/
/*1. Create a program that reads a letter of the alphabet from the user. If the user enters
a, e, i, o or u then your program should display a message indicating that the
entered letter is a vowel. If the user enters y then your program should display a
message indicating that sometimes y is a vowel, and sometimes y is a consonant.
Otherwise y*/

#include <iostream> //header file
using namespace std;

int main() // main function
{
    //declared a variable to store day
	int d; 
    //declared a variable to store month
	string m; 
	
	//heading of this program
	cout<<"\n\tHOLIDAY\'S IN CANADA\t\n\n";
	//ask user to enter name of month
	cout<<"\tEnter name of the month\n";
	cin>>m;
	//ask user to enter day
	cout<<"\tEnter the day\n";
	cin>>d;
	
	//add a condition that will execute only when input entered will be match
	if (m=="january" && d==1)
	{
		cout<<"\t New year\'s day\n";
	}
	//add a condition that will execute only when input entered will be match
	else if (m=="july" && d==1)
	{
		cout<<"\tCanada day\n";
	}
	//add a condition that will execute only when input entered will be match
	else if (m=="december" && d==25)
	{
		cout<<"\tChristmas day\n";
	}
	//add a condition that will execute only when input entered will mot match
	else
	{
		cout<<"\tentered month and day do not correspond to a fixed-date holiday\n";
	}
	return 0;
}