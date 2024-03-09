//33)  Write a program to display alphabets from A to Z.
 
#include <iostream>
using namespace std;

int main()
{
	cout<<"\tAlphabets from A to Z\n\n";
	int counter;
	
	for (counter=65; counter<=90; counter++)
	{
		cout<<"\t"<<char(counter)<<endl;
	}
	
	return 0;
}