// pointetrs

#include <iostream>
using namespace std;

int main()
{
	int a=5;
	int *b;
	
	b=&a;
	
	cout<<"address of a "<<&a<<endl;
	cout<<"value of a "<<a<<endl;
	cout<<"address of b "<<&b<<endl;
	cout<<"value of a "<<*(&a)<<endl;
	cout<<"value of a "<<*b<<endl;
	
	return 0;
}