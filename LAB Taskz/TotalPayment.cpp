#include<iostream>
using namespace std;

main(int argc, char** argv)
{
	int hours, payrate, totalpay;
	cout<<"Enter number of hours you worked: \n";
	cin>>hours;
	cout<<"Enter payrate: \n";
	cin>>payrate;
	totalpay=hours*payrate;
	cout<<"your total pay is: "<<totalpay;
	return 0;
}