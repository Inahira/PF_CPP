// 45)  Write a program in C++ language to print the following series. 0 3 6 9 12 15. 

#include <iostream>
using namespace std;

int main()
{
	int i;
	
	for (i=0; i<=16; i+=3)
	{
		cout<<"\t"<<i;
	}
	
	return 0;
}