#include<iostream>
using namespace std;
int main()
{
	  float temp;
	  cout<<"weather prediction :"<<endl;
	  cin>>temp;
	  if(temp<35)
	  {
	  	cout<<"the weather is hot :"<<endl;
	  	
	  }
	  else if(temp>=20||temp<=25)
	  {
	  	cout<<"the weather is pleasent"<<endl;
	  	
	  }
	  else
	  {
	  	cout<<"the weather is cold"<<endl;
	  	
	  }
	  return 0;
}

