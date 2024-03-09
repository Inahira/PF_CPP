/*
Write a program that reads a sound level in decibels from the user. If the user
enters a decibel level that matches one of the noises in the table then your program
should display a message containing only that noise. If the user enters a number
of decibels between the noises listed then your program should display a message
indicating which noises the level is between. Ensure that your program also
generates reasonable output for a value smaller than the quietest noise in the table,
and for a value larger than the loudest noise in the table.
*/
#include <iostream>
using namespace std;

int main()
{
	//heading for this program
	cout<<"\n\tSOUND LEVELS AND NOISES\n\n";
	
	//declared a variabl for sound level in decible
	int db;
	
	//ask user to enter sound level in decible
	cout<<"\tEnter sound level in decible:\n";
	cin>>db;
	
	//this output will execute if user enter a sound level 130
	if (db==130)
	{
	   cout<<"\tJachammer\n";	
	}
	//this output will execute if user enter a sound level 106
	else if (db==106)
	{
	   cout<<"\tGas lawnmower\n";	
	}
	//this output will execute if user enter a sound level 70
	else if (db==70)
	{
	   cout<<"\tAlarm clock\n";	
	}
	//this output will execute if user enter a sound level 40
	else if (db==40)
	{
	   cout<<"\tQuiet room\n";	
	}
	//this output will execute if user enter a sound level between 40 and 130
	else if (db>=40 && db<=130)
	{
	   cout<<"\tSound level is between 40 to 130\n";	
	}
	//this output will execute if user enter a sound level less than 40
	else if (db<40)
	{
	   cout<<"\tSound level below 40\n";	
	}
	//this output will execute if user enter a sound level greater than 130
	else if (db>130)
	{
	   cout<<"\tSound level above 130\n";	
	}
	//this will execute if user have entered a character or alphabet
	else
	{
		cout<<"\t Invalid Sound level\n";	
	}
	return 0;
}