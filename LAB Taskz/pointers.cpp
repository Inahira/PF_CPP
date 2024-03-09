#include<iostream>
using namespace std;

int main()
{
	//pointer stores the adress
	int a=54;
	int* ptra;
	ptra = &a;
	
	cout<<"the value of a is "<< a <<endl;
	cout<<"the value of a is "<< *ptra <<endl;
	cout<<"the address of a is "<< &a <<endl;
	cout<<"the address of a is "<< ptra <<endl;
	
	return 0;
}