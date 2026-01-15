#include <iostream>
using namespace std;
int main()
{
	int salary;
	int experience;
	cout<<"Enter your salary: ";
	cin>>salary;
	if(salary>=25000)
	{
	cout<<"Eligible for loan.";
	}
	else
	{
	if(salary<25000)
	{
	cout<<"Enter experience: ";
	cin>>experience;
	if(experience>5)
	cout<<"Eligible for loan.";
	else
	cout<<"Not eligible.";
	}
	}
	return 0;
}
