#include <iostream>
using namespace std;

int main()
{
	/*if-else practice to check whether the person is eligible for somthing or not */
	
	// initializing variable age
	int age;
	
	//ask for user's age
	cout<<"Enter your age: \n";
	
	//get input from user
	cin>>age;
	
	//check if age is greater than 1 and less than 18
	if (age<18 && age>1)
	{
		//check if age is greater than 1 and less than 18, if so print "You Are Not Eligible"
		cout<<"You Are Not Eligible";
	}
	//check if age is greater than 100 and less than 1
	else if (age>100 || age<1)
	{
		//check if age is greater than 100 and less than 1, if so print "Invalid Age"
		cout<<"Invalid Age";
	}
	else if (age>50)
	{
		//check if age is greater than 50, if so print "song lyrics"
		cout<<"We're only gettin' older, baby\nAnd I've been thinkin' about it lately\nDoes it ever drive you crazy\nJust how fast the night changes\?";
	}
	//it will execute when age is somewhere in between 18 and 100
	else
	{
		//if age is somewhere in between 18 and 100 print "You are Eligible"
		cout<<"You are Eligible";
	}
	return 0;
}
