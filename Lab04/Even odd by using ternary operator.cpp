#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	(a%2==0)?cout<<"The number "<<a<<" is even.":cout<<"The number "<<a<<" is odd.";
	
	return 0;
}

