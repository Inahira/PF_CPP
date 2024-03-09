// 15)  write a program that displays counting from 1 to 10 using while loop. 

#include <iostream>
using namespace std;

int main()
{
	cout<<"\n\t COUNTING 1-10\n\n";
	int counter=1;
	
	//using while loop
	while (counter<=10)
	{
		cout<<"\t"<<counter<<endl;
		counter++;
	}
	
	return 0;
}