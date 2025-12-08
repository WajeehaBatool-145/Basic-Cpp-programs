#include <iostream>
using namespace std;
int main()
{
	
	int age, income;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"Enter your annual income: $";
		cin>>income;
		if(income>30000)
		 cout<<"Congratulations! You're eligible for loan.";
		if(income<30000)
		cout<<"You meet the age requirement but are not eligible for loan because your income is below $30000.";
	}
	if(age<18)
	{
		cout<<"You're not eligible for a loan because you are under 18 years of age.";
	}
	return 0;
}
