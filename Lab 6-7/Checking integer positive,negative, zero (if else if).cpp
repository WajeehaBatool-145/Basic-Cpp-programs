#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the integer you want to check: ";
	cin>>num;
	//checking conditions using if-elseif-else structure
	if(num>0)
	{
		cout<<num<<" is positive.";
	}
	else if(num<0)
	{
		cout<<num<<" is negative.";
	}
	else
	{
		cout<<"You entered zero.";
	}
	
	
	
	
	
	
	return 0;
}
