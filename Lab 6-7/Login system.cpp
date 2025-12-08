#include <iostream>
using namespace std;
int main()
{
	string username="admin";
	string password="12345";
	string password1, username1;

cout<<"enter username: ";
cin>>username1;
if(username1!=username)
{
cout<<"user not found";
}

else if(username1==username)
{
	cout<<"Enter password: ";
	cin>>password1;
	if(password1==password)
	cout<<"Access granted!";
	else
	cout<<"wrong password";
}
	return 0;
}
