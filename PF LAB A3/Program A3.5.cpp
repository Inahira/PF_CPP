/*
5. Develop a program that reads a four-digit integer from the user and displays the
sum of the digits in the number. For example, if the user enters 3141 then your
program should display 3+1+4+1=9.
*/
#include <iostream>
using namespace std;

int main()
{
	//heading of this program
	cout<<"\n\tSUM OF DIGITS OF A FOUR DIGIT NUMBER\n\n";
	
	//a variable for storing four digit number
	int num;
	
	//ask user to enter four digit number
	cout<<"\tEnter a four-digit number\n";
	cin>>num;
	
	// Extract each digit from the number
    int digit_1 = num / 1000;
    int digit_2 = (num % 1000) / 100;
    int digit_3 = (num % 100) / 10;
    int digit_4 = num % 10;
    
     // Calculate the sum of the digits
    int digit_sum = digit_1 + digit_2 + digit_3 + digit_4;
    
    // Display the result
    cout << "\tThe sum of the digits in " << num << " is: "<< digit_1 << " + " << digit_2 << " + " << digit_3 << " + " << digit_4<< " = " << digit_sum <<endl;
}