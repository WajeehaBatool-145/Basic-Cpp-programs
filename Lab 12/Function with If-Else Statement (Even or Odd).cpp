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
	 int num;
	cout<<"Enter the number: ";
	cin>>num;
	 checking_number(num);
	return 0;
}
