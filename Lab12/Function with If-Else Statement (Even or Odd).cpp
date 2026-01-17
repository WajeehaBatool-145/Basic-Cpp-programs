#include <iostream>
using namespace std;
void checking_number(int num)
{
	if(num%2==0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"Odd";
	}
}
int main()
{
	 int n;
	cout<<"Enter the number: ";
	cin>>n;
	 checking_number(n);
	return 0;
}
