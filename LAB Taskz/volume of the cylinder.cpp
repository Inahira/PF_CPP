#include<iostream>
using namespace std;

int main()
{
	float radius,hight,pi,volume;
	pi = 3.1416;
	
	cout<<"enter cylinder\'s radius: "<<endl;
	cin>>radius;
	cout<<"enter  cylinder\'s hight: "<<endl;
	cin>>hight;
	
	volume = pi*radius*radius*hight;
	
	cout<<"The volume of the cylinder is "<<volume<<endl;
	
	return 0;
}