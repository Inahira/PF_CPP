//ASSIGNMENT #02
//PROGRAMMING FUNDAMENTALS LAB
#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter your obtained marks out of 100\n";
	cin>>marks;
	
	if (marks>=90 && marks<=100)
	{
		cout<<"You Got A+ Grade\n";
	}
	else if (marks>=80 && marks<=89)
	{
		cout<<"You Got A Grade\n";
	}
	else if (marks>=70 && marks<=79)
	{
		cout<<"You Got B Grade\n";
	}
	else if (marks>=60 && marks<=69)
	{
		cout<<"You Got C+ Grade\n";
	}
	else if (marks>=50 && marks<=59)
	{
		cout<<"You Got C Grade\n";
	}
	else if (marks>=40 && marks<=49)
	{
		cout<<"You Got D Grade\n";
	}
	else if (marks<=30 && marks<=39)
	{
		cout<<"You Failed\n";
	}
	else
	{
		cout<<"Invalid Marks\n";
	}
	return 0;
}