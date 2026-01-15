#include <iostream>
using namespace std;
int main()
{
	int account_balance;
	bool loyalty;
	cout<<"Enter your account balance: ";
	cin>>account_balance;
	//checking account type
	cout<<"account type: ";
	account_balance<100?cout<<"Low balance account":(account_balance>=100 && account_balance<=500?cout<<"standard account":cout<<"Premium account");
	//Special offer eligibilty
	cout<<"\nEnter 1 for loyal and 0 for not loyal: ";
	cin>>loyalty;
	account_balance>200&&loyalty==1?cout<<"\nEligible for special offer":cout<<"Not eiligible";
	
	return 0;
}
