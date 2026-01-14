#include <iostream>
using namespace std;
void factorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
		{ 
		fact=i*fact;
		}
		cout<<"factorial is : "<<fact;
}
int main()
{
	int num;
	cout<<"Enter number to calculate its factorial: ";
	cin>>num;
	factorial(num);
	
	
	return 0;
}
