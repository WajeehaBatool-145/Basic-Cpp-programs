#include <iostream>
using namespace std;
int main()
{
	string password1;
	string password="wajeehabatool";
	

	do
	{
		cout<<"Enter password: ";
		cin>>password1;
	}
	while(password1!=password);
	cout<<"Correct!";
	
	return 0;
}
