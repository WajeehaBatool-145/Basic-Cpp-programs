#include <iostream>
using namespace std;
void add(int a, int b)
{
	cout<<"Sum is: "<<a+b<<endl;
}
void sub(int a, int b)
{
	cout<<"Difference is: "<<a-b<<endl;
}
void mpy(int a, int b)
{
	cout<<"Product is: "<<a*b<<endl;
}
void div(int a, int b)
{
	cout<<"Division is: "<<a/b<<endl;
}
int main()
{
int choice,a,b;
bool flag=1;
do
{
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division;\n5. exit\nEnter number to corresponding operation."<<endl;
cin>>choice;
switch(choice)
{
	case 1:
	cout<<"Enter 2 numbers: "<<endl;
	cin>>a;
	cin>>b;
	add(a,b);
		break;
	case 2:
	cout<<"Enter 2 numbers: "<<endl;
	cin>>a;
	cin>>b;
	sub(a,b);
		break;
	case 3:
	cout<<"Enter 2 numbers: "<<endl;
	cin>>a;
	cin>>b;
	mpy(a,b);
		break;
	case 4:
	cout<<"Enter 2 numbers: "<<endl;
	cin>>a;
	cin>>b;
		div(a,b);
		break;
	case 5:
		flag=0;
	default:
		break;
}
}
while(flag==1);


return 0;
}
