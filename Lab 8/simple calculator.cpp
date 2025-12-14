#include <iostream>
using namespace std;
int main()
{
	int a,b,choice;
	char o;
	cout<<"Enter a number to corresponding choice: "<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b;
	break;

	case 2:
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b;
	break;

	case 3:
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b;
	break;

	case 4:
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;		
	cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b;
	break;
	
	default:
	cout<<"Invalid choice.";
	break;
	}
	return 0;
}
