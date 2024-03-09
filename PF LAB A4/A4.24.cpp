// 24)  Write a program that displays first five numbers with their cubes using do while loop. 

#include <iostream>
using namespace std;

int main()
{
	//using do while loop
	cout<<"\n\tFIRST FIVE NUMBERS WITH THEIR CUBES\n\n";
	int counter=1;
	
	do
	{
		cout<<"\tNumber is \'"<<counter<<"\' & it\'s cube is \'"<<counter*counter*counter<<"\'"<<endl;
		counter++;
	}
	while (counter<=5);
	
	return 0;
}