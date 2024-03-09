#include<iostream>
using namespace std;

int main()
{
	cout<<"\tString\t\n"<<endl;
	string name = "Tahira";
	
	cout<<"The name is " << name <<endl;//it will print the string variable name
	cout<<"The length of "<<name<< " is " << name.length() <<endl;//it will print the string variable name's total length which is 6
	cout<<"The substring of "<<name<< " is " << name.substr(0,3) <<endl;//it will print the string variable name's character from 0 to 3
	cout<<"The substring of "<<name<< " is " << name.substr(3,6) <<endl;//it will print the string variable name's character from 3 to 6
	return 0;
}