/*1. Create a program that reads a letter of the alphabet from the user. If the user enters
a, e, i, o or u then your program should display a message indicating that the
entered letter is a vowel. If the user enters y then your program should display a
message indicating that sometimes y is a vowel, and sometimes y is a consonant.
Otherwise y*/

#include<iostream> //header file
using namespace std;

int main() // main function
{
    //declared a character variable
	char ch; 
	
	//heading of this program
	cout<<"\n\tVOWELS AND CONSONANTS\t\n\n";
	//ask user to enter an alphabet
	cout<<"\tEnter an Alphabet\n";
	cin>>ch;
	
	//add a condition for vowels
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		cout<<"\t "<<ch<<" is a vowel\n";
	}
	//add codition for letter y
	else if (ch=='y' ||ch=='Y')
	{
		cout<<"\tSometimes "<<ch<<" is vowel and sometimes "<<ch<<" is consonant\n";
	}
	else
	{
		cout<<"\tLetter "<<ch<<" is a consonant\n";
	}
	return 0;
}