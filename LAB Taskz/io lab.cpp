
//A c++ program that takes marks of 5 subjects and output its sum

#include<iostream>
using namespace std;

int main()
{
	float math, physics, spanish, astronomy, programming, sum;
	
	cout<<"Enter your Math\'s marks: "<<endl;
	cin>>math;
	cout<<"Enter your Physics\'s marks: "<<endl;
	cin>>physics;
	cout<<"Enter your Spanish\'s marks: "<<endl;
	cin>>spanish;
	cout<<"Enter your Astronomy\'s marks: "<<endl;
	cin>>astronomy;
	cout<<"Enter your Programming\'s marks: "<<endl;
	cin>>programming;
	
	sum = math + physics + spanish + astronomy + programming;
	cout<<"Total marks of these subjects: "<<sum<<endl;
}