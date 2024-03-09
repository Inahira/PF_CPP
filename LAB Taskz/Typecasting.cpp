#include<iostream>
using namespace std;

int main()
{
	cout<<"Typecasting"<<endl;
	int a = 556;
	float b = 84.548;
	
	cout<<"int " << a << " is changed to float "<<(float) a/5<<endl;//it will change integer variable into float
	
	cout<<"float " << b<< " is changed to int "<<(int) b<<endl;//it will change float variable into integer
	
	return 0;
}