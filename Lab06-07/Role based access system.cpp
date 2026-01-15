#include <iostream>
using namespace std;
int main()
{
	string username= "admin";
	string role;
	string password="password123";
	string username1, password1;
	cout<<"Enter Username: "<<endl;
	cin>>username1;
	cout<<"Enter Password: "<<endl;
	cin>>password1;
	//verifying username and password
	if(username1==username && password1==password)
	{
		cout<<"Authentication Successful"<<endl;
		//role based access
		cout<<"Who are you?\nAdmin\nGuest\nAnyother\nEnter your role: "<<endl;
		cin>>role;
		if(role=="Admin" || role=="admin")
		cout<<"Full access"<<endl;
		else if(role=="Guest" || role=="guest")
		cout<<"Limited Access"<<endl;
		else if(role=="Anyother" || role=="anyother")
		cout<<"No access"<<endl;
	}
	else
	{
		cout<<"Authentication Failed. Access Denied."<<endl;
	}
	
	return 0;
}
