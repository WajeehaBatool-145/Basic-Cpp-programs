#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	while(n<=0)
	{
		cout<<"Re-enter the number."<<endl;
		cin>>n;
	}
	cout<<"You entred positive number "<<n;
	
	
	return 0;
}
