#include <iostream>
using namespace std;
int main()
{
	char s;
	cout<<"Enter color of signal: ";
	cin>>s;
	if(s=='R'||s=='r')
	cout<<"Stop";
	if(s=='G'||s=='g')
	cout<<"GO";
	if(s=='Y'||s=='y')
	cout<<"slow down";
	return 0;
}
